#include <iostream>
#include <vector>
#include <algorithm>
#include <windows.h>//importovanie kniznic

using namespace std;

void clearConsole();
void Play();
void youWon();
void youLost();//deklarovanie funkcii

int main() {
    Play();
    return 0;
}

void Play() {
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
            cout << "Character '" << letter << "' has already been guessed." << endl;
            cout << endl;
            continue;
        }

        guessed_chars.push_back(letter);

        bool correct_guess = false;//uhadol pouzivatel slovo
        for (int i = 0; i < word.length(); ++i) {
            if (word[i] == letter) {
                guessed[i] = true;
                correct_guess = true;
            }
        }

        if (correct_guess) {//ak uhadol pouzivatel slovo
            clearConsole();
            if (current_stage < sizeof(hangman_stages) / sizeof(hangman_stages[0])) {
                cout << hangman_stages[current_stage] << endl;
            }
            cout << "Correct" << endl << endl;
        }
        else {//ak neuhadol pouzivatel slovo
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
            cout << "Congratulations, you guessed the word: " << word<< endl;
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
        cout << "Thank you for playing! Goodbye." << endl;
    }
}

void clearConsole() {//vymazanie konzoly
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
