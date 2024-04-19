#include <iostream>
#include <stdio.h>
#include <cstdlib>
#include <windows.h>
#include <vector>
#include <algorithm>

using namespace std;



void showSkore();
void showMenu();
void gameBoot();
void showPravidla();
void clearConsole();
void clearConsole();
void Play();
void thanks();
void youWon();
void youLost();


int main() {
    gameBoot();
}


void clearConsole() {
    HANDLE hStdOut;
    CONSOLE_SCREEN_BUFFER_INFO csbi;
    DWORD count;
    DWORD cellCount;
    COORD homeCoords = { 0, 0 };

    hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
    if (hStdOut == INVALID_HANDLE_VALUE) return;

    if (!GetConsoleScreenBufferInfo(hStdOut, &csbi)) return;
    cellCount = csbi.dwSize.X * csbi.dwSize.Y;

    if (!FillConsoleOutputCharacter(
        hStdOut,
        (TCHAR)' ',
        cellCount,
        homeCoords,
        &count
    )) return;

    if (!FillConsoleOutputAttribute(
        hStdOut,
        csbi.wAttributes,
        cellCount,
        homeCoords,
        &count
    )) return;

    SetConsoleCursorPosition(hStdOut, homeCoords);
}

void gameBoot() {
    cout << R"(************************************************************************************************************************)" << endl;
    cout << R"(                                                                                                                        )" << endl;
    cout << R"(                                                                                                                        )" << endl;
    cout << R"(                                                                                                                        )" << endl;
    cout << R"(                                                                                                                        )" << endl;
    cout << R"(                        _   _                        __  __                                                             )" << endl;
    cout << R"(                       | | | |                      |  \/  |                                                            )" << endl;
    cout << R"(                       |  _  | / _` || '_ \  / _` | | |\/| | / _` || '_ \                                               )" << endl;
    cout << R"(                       | | | || (_| || | | || (_| | | |  | || (_| || | | |                                              )" << endl;
    cout << R"(                       \_| |_/ \__,_||_| |_| \__, | \_|  |_/ \__,_||_| |_|                                              )" << endl;
    cout << R"(                                              _ / |                                                                     )" << endl;
    cout << R"(                                             |___/                                                                      )" << endl;
    cout << R"(                                                                                                                        )" << endl;
    cout << R"(                                                                                                                        )" << endl;
    cout << R"(                       Autori hry: Samuel Janec, Matus Kvasnovsky, Jakub Burdiak                                        )" << endl;
    cout << R"(                           Pre pokracovanie zmacknite prosim Enter                                                      )" << endl;
    cout << R"(                                                                                                                        )" << endl;
    cout << R"(                                                                                                                        )" << endl;
    cout << R"(                                                                                                                        )" << endl;
    cout << R"(                                                                                                                        )" << endl;
    cout << R"(                                                                                                                        )" << endl;
    cout << R"(                                                                                                                        )" << endl;
    cout << R"(                                                                                                                        )" << endl;
    cout << R"(                                                                                                                        )" << endl;
    cout << R"(                                                                                                                        )" << endl;
    cout << R"(                                                                                                                        )" << endl;
    cout << R"(************************************************************************************************************************)" << endl;

    while (true) {
        if (GetAsyncKeyState(VK_RETURN) & 0x8000) {
            showMenu();
            break;
        }
    }
}

void showMenu() {
    clearConsole();
    // ODSKOK ------------------------------------------------------------------------------------------------------------------------------
    int volba;
    cout << "*********************************************************************************************************************" << endl;
    cout << "                                 Menu - Vyberte prosim cislo na zaklade odpovede ()                                  " << endl;
    cout << "1. Hrat                                                                                                              " << endl;
    cout << "2. Statistiky                                                                                                        " << endl;
    cout << "3. Pravidla                                                                                                          " << endl;
    cout << "4. Ukoncit                                                                                                           " << endl;
    cout << "                                                                                                                     " << endl;
    cout << "                                                                                                                     " << endl;
    cout << "                                                                                                                     " << endl;
    cin >> volba;
    while (true) {
        if (volba == 1 || volba == 2 || volba == 3 || volba == 4) {
            if (volba == 1) {
                Play();
                break;
            }

            else if (volba == 2) {
                showSkore();
                break;
            }

            else if (volba == 3) {
                showPravidla();
                break;
            }
            else if (volba == 4) {
                exit(0);
                break;
            }

        }
        else {
            cin.clear();
            cout << " " << endl;
            cout << "Zadali ste zly zak, hru vpnite pomocou stacenia akehokolvek znaku a zapnite ju znov :) " << endl;
            cin >> volba;
            return;
        }
    }
}

void showSkore() {
    clearConsole();
    cout << "*********************************************************************************************************************" << endl;
    cout << "                                                  STATISTIKY                                                         " << endl;
    cout << "                                   Stlacte B do aby ste sa vratili do MENU.                                          " << endl;
    cout << "                                                                                                                     " << endl;
    cout << "                                                                                                                     " << endl;
    cout << " Pocet hranych hier:                                                                                                 " << endl;
    cout << " Pocet prehranych hier:                                                                                              " << endl;
    cout << " Pocet uhadnutych slovicok:                                                                                          " << endl;
    cout << "                                                                                                                     " << endl;
    cout << "                                                                                                                     " << endl;
    cout << "                                                                                                                     " << endl;
    cout << "                                                                                                                     " << endl;

    while (true) {
        if ((GetAsyncKeyState(0x42) & 0x8000) || (GetAsyncKeyState(0x62) & 0x8000)) {
            showMenu();
            break;
        }
    }
}

void showPravidla() {

    clearConsole();
    cout << "*********************************************************************************************************************" << endl;
    cout << "                                                  PRAVIDLA                                                           " << endl;
    cout << "                                   Stlacte tlacitko P do aby ste sa vratili do MENU.                                 " << endl;
    cout << " 1.                                                                                                                  " << endl;
    cout << " 2.                                                                                                                  " << endl;
    cout << " 3.                                                                                                                  " << endl;
    cout << " 4.                                                                                                                  " << endl;
    cout << " 5.                                                                                                                  " << endl;
    cout << " 6.                                                                                                                  " << endl;

    while (true) {
        if ((GetAsyncKeyState(0x50) & 0x8000) || (GetAsyncKeyState(0x70) & 0x8000)) {
            showMenu();
            break;
        }
    }
}


void Play() {
    clearConsole();
    cout << "Enter a word: ";//ziadame pouzivatela aby zadal slovo,ktore sa bude hadat
    string word;
    cin >> word;
    clearConsole();

    string hangman_stages[] = {//stavy vykreslovania hangmana
    "                                                                                          \n"
    "           .............................................................................-=\n"
    "        ...                                                                           .. :\n"
    "      ..                                                                           ...   :\n"
    "   ...                                                                           ..      :\n"
    " ..                                                                            ..      ..\n"
    "-.............................................................................:      ..  \n"
    ":                                                                             .   ...    \n"
    ":.............................................................................. ..         \n"
    ,
    "                                                                                          \n"
    "                                            .:...............:.                           \n"
    "                                            ..               ..                           \n"
    "                                            ..               ..                           \n"
    "                                            ..                                            \n"
    "                                            ..                                            \n"
    "                                            ..                                            \n"
    "                                            ..                                            \n"
    "                                            ..                                            \n"
    "                                            ..                                            \n"
    "                                            ..                                            \n"
    "                                            ..                                            \n"
    "                                            ..                                            \n"
    "                                            ..                                            \n"
    "                                            ..                                            \n"
    "                                            ..                                            \n"
    "                                            ..                                            \n"
    "                                            ..                                            \n"
    "           .................................:.  ........................................:=\n"
    "         ..                                 ..                                        .. :\n"
    "      ...                                   ..                                      ..   :\n"
    "    ..                                                                           ...     :\n"
    " ..                                                                            ..      ..\n"
    "=.............................................................................:      ..  \n"
    ":                                                                             .    ..    \n"
    ":                                                                             .  ..       \n"
    "-.............................................................................:.          \n"
        ,
    "                                                                                          \n"
    "                                            .:...............:.                           \n"
    "                                            ..               ..                           \n"
    "                                            ..               ..                           \n"
    "                                            ..            .......                         \n"
    "                                            ..           :       .:                       \n"
    "                                            ..           :        :                       \n"
    "                                            ..           :        :                       \n"
    "                                            ..            ..    .:                        \n"
    "                                            ..               ..                           \n"
    "                                            ..                                            \n"
    "                                            ..                                            \n"
    "                                            ..                                            \n"
    "                                            ..                                            \n"
    "                                            ..                                            \n"
    "                                            ..                                            \n"
    "                                            ..                                            \n"
    "                                            ..                                            \n"
    "           .................................:.  ........................................:=\n"
    "         ..                                 ..                                        .. :\n"
    "      ...                                   ..                                      ..   :\n"
    "    ..                                                                           ...     :\n"
    " ..                                                                            ..      ..\n"
    "=.............................................................................:      ..  \n"
    ":                                                                             .    ..    \n"
    ":                                                                             .  ..       \n"
    "-.............................................................................:.          \n"
        ,
    "                                                                                          \n"
    "                                            .:...............:.                           \n"
    "                                            ..               ..                           \n"
    "                                            ..               ..                           \n"
    "                                            ..            .......                         \n"
    "                                            ..           :       .:                       \n"
    "                                            ..           :        :                       \n"
    "                                            ..           :        :                       \n"
    "                                            ..            ..    .:                        \n"
    "                                            ..               ::                           \n"
    "                                            ..               ..                           \n"
    "                                            ..               ..                           \n"
    "                                            ..               .                            \n"
    "                                            ..                                            \n"
    "                                            ..                                            \n"
    "                                            ..                                            \n"
    "                                            ..                                            \n"
    "                                            ..                                            \n"
    "           .................................:.  ........................................:=\n"
    "         ..                                 ..                                        .. :\n"
    "      ...                                   ..                                      ..   :\n"
    "    ..                                                                           ...     :\n"
    " ..                                                                            ..      ..\n"
    "=.............................................................................:      ..  \n"
    ":                                                                             .    ..    \n"
    ":                                                                             .  ..       \n"
    "-.............................................................................:.          \n"
        ,
    "                                                                                          \n"
    "                                            .:...............:.                           \n"
    "                                            ..               ..                           \n"
    "                                            ..               ..                           \n"
    "                                            ..            .......                         \n"
    "                                            ..           :       .:                       \n"
    "                                            ..           :        :                       \n"
    "                                            ..           :        :                       \n"
    "                                            ..            ..    .:                        \n"
    "                                            ..           ..  ::  ..                       \n"
    "                                            ..             ..-:..                         \n"
    "                                            ..               ..                           \n"
    "                                            ..               .                            \n"
    "                                            ..                                            \n"
    "                                            ..                                            \n"
    "                                            ..                                            \n"
    "                                            ..                                            \n"
    "                                            ..                                            \n"
    "           .................................:.  ........................................:=\n"
    "         ..                                 ..                                        .. :\n"
    "      ...                                   ..                                      ..   :\n"
    "    ..                                                                           ...     :\n"
    " ..                                                                            ..      ..\n"
    "=.............................................................................:      ..  \n"
    ":                                                                             .    ..    \n"
    ":                                                                             .  ..       \n"
    "-.............................................................................:.          \n"
        ,
    "                                                                                          \n"
    "                                            .:...............:.                           \n"
    "                                            ..               ..                           \n"
    "                                            ..               ..                           \n"
    "                                            ..            .......                         \n"
    "                                            ..           :       .:                       \n"
    "                                            ..           :        :                       \n"
    "                                            ..           :        :                       \n"
    "                                            ..            ..    .:                        \n"
    "                                            ..           ..  ::  ..                       \n"
    "                                            ..             ..-:..                         \n"
    "                                            ..               ..                           \n"
    "                                            ..               ..                           \n"
    "                                            ..             ......                         \n"
    "                                            ..           ..      ..                       \n"
    "                                            ..                                            \n"
    "                                            ..                                            \n"
    "                                            ..                                            \n"
    "                                            ..                                            \n"
    "           .................................:.  ........................................:=\n"
    "         ..                                 ..                                        .. :\n"
    "      ...                                   ..                                      ..   :\n"
    "    ..                                                                           ...     :\n"
    " ..                                                                            ..      ..\n"
    "=.............................................................................:      ..  \n"
    ":                                                                             .    ..    \n"
    ":                                                                             .  ..       \n"
    "-.............................................................................:.          \n"
    };
    cout << hangman_stages[0];
    int remaining_attempts = 5;//ostavajuce pokusy
    int current_stage = 0;//aktualny stav vykreslovania hangmana

    vector<char> guessed_chars;//vektory pouzitich pismen
    vector<bool> guessed(word.length(), false);//Vektor pre zaznamenanie uhadnutych pismen v slove

    while (remaining_attempts > 0) {//Cyklus bezi, pokial je este mozne pokracovat v hre
        cout << "Remaining attempts: " << remaining_attempts << endl;

        cout << "Word: ";//aktualny vypis slova
        for (int i = 0; i < word.length(); ++i) {
            if (guessed[i]) {
                cout << word[i];
            }
            else {
                cout << "_";
            }
        }
        cout << endl;

        char letter;
        cout << "Enter a letter you think is in the word: ";//hrac zadava pismeno
        cin >> letter;

        if (find(guessed_chars.begin(), guessed_chars.end(), letter) != guessed_chars.end()) {//bolo uz pismeno zadane viackrat
            clearConsole();
            cout << hangman_stages[current_stage];
            cout << "Character '" << letter << "' has already been guessed." << endl;
            cout << endl;
            continue;
        }

        guessed_chars.push_back(letter);

        bool correct_guess = false;//uhadol pouzivatel pismeno

        for (int i = 0; i < word.length(); ++i) {//cyklus,ktory hlada ci uhadnute pismeno je v slove
            if (word[i] == letter) {
                guessed[i] = true;
                correct_guess = true;
            }
        }

        if (correct_guess) {//ak uhadol pouzivatel pismeno
            clearConsole();
            if (current_stage < sizeof(hangman_stages) / sizeof(hangman_stages[0])) {
                cout << hangman_stages[current_stage] << endl;
            }
            cout << "Correct" << endl << endl;
        }
        else {//ak neuhadol pouzivatel pismeno
            clearConsole();
            remaining_attempts--;
            current_stage++;
            if (current_stage < sizeof(hangman_stages) / sizeof(hangman_stages[0])) {
                cout << hangman_stages[current_stage] << endl;
            }
            cout << "Incorrect" << endl;
        }

        cout << "You entered: " << letter << endl;

        bool game_over = true;//su este neuhadnute pismena,ak ano hra pokracuje
        for (int i = 0; i < word.length(); ++i) {
            if (!guessed[i]) {
                game_over = false;
                break;
            }
        }

        if (game_over) {//ak sme uhadli pismena a mali sme stale pokusy(vyhral si)
            youWon();
            cout << "Congratulations, you guessed the word: " << word << endl;
            break;
        }
        else if (remaining_attempts == 0) {//ak nam doli pokusy(prehral si)
            youLost();
            cout << "The correct word was: " << word << endl;
            break;
        }
    }

    char play_again;//chce pouzivatel hrat znova
    cout << "Do you want to play again? (y/n): ";
    cin >> play_again;

    if (play_again == 'y' || play_again == 'Y') {
        Play();
    }
    else {
        thanks();
    }
}

void youLost() {

    cout <<
        " __   __              _                   \n"
        " \\ \\ / /__  _   _    | |    ___  ___  ___\n"
        "  \\ V / _ \\| | | |   | |   / _ \\/ __|/ _ \\\n"
        "   | | (_) | |_| |   | |__| (_) \\__ \\  __/\n"
        "   |_|\\___/ \\__,_|   |_____\\___/|___/\\___|\n"
        "                                           " << endl;
}

void youWon() {
    cout <<
        " __   __             __        ___        \n"
        " \\ \\ / /__  _   _    \\ \\      / (_)_ __ \n"
        "  \\ V / _ \\| | | |    \\ \\ /\\ / /| | '_ \\\n"
        "   | | (_) | |_| |     \\ V  V / | | | | |\n"
        "   |_|\\___/ \\__,_|      \\_/\\_/  |_|_| |_|\n"
        "                                           " << endl;
}

void thanks() {
    cout <<
        "  _______ _                 _            ______             _____  _             _             \n"
        " |__   __| |               | |          |  ____|           |  __ \\| |           (_)            \n"
        "    | |  | |__   __ _ _ __ | | _____    | |__ ___  _ __    | |__) | | __ _ _   _ _ _ __   __ _ \n"
        "    | |  | '_ \\ / _` | '_ \\| |/ / __|   |  __/ _ \\| '__|   |  ___/| |/ _` | | | | | '_ \\ / _` |\n"
        "    | |  | | | | (_| | | | |   <\\__ \\   | | | (_) | |      | |    | | (_| | |_| | | | | | (_| |\n"
        "    |_|  |_| |_|\\__,_|_| |_|_|\\_\\___/   |_|  \\___/|_|      |_|    |_|\\__,_|\\__, |_|_| |_|\\__, |\n"
        "                                                                            __/ |         __/ |\n"
        "                                                                           |___/         |___/ " << endl;
}