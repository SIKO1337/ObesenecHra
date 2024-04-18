#include <iostream>
#include <vector>
#include <algorithm>
#include <windows.h>

using namespace std;

void clearConsole();
void Play();
void youWon();
void youLost();

int main() {
    Play();
    return 0;
}

void Play() {
    cout << "Enter a word: ";
    string word;
    cin >> word;
    clearConsole();

    string hangman_stages[] = {
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

    int remaining_attempts = 5;
    int current_stage = 0;

    vector<char> guessed_chars;
    vector<bool> guessed(word.length(), false);

    while (remaining_attempts > 0) {
        cout << "Remaining attempts: " << remaining_attempts << endl;

        cout << "Word: ";
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
        cout << "Enter a letter you think is in the word: ";
        cin >> letter;

        if (find(guessed_chars.begin(), guessed_chars.end(), letter) != guessed_chars.end()) {
            cout << "Character '" << letter << "' has already been guessed." << endl;
            cout << endl;
            continue;
        }

        guessed_chars.push_back(letter);

        bool correct_guess = false;
        for (int i = 0; i < word.length(); ++i) {
            if (word[i] == letter) {
                guessed[i] = true;
                correct_guess = true;
            }
        }

        if (correct_guess) {
            clearConsole();
            if (current_stage < sizeof(hangman_stages) / sizeof(hangman_stages[0])) {
                cout << hangman_stages[current_stage] << endl;
            }
            cout << "Correct" << endl << endl;
        }
        else {
            clearConsole();
            remaining_attempts--;
            current_stage++;
            if (current_stage < sizeof(hangman_stages) / sizeof(hangman_stages[0])) {
                cout << hangman_stages[current_stage] << endl;
            }
            cout << "Incorrect" << endl;
        }

        cout << "You entered: " << letter << endl;

        bool game_over = true;
        for (int i = 0; i < word.length(); ++i) {
            if (!guessed[i]) {
                game_over = false;
                break;
            }
        }

        if (game_over) {
            youWon();
            cout << "Congratulations, you guessed the word: " << word << endl;
            break;
        }
        else if (remaining_attempts == 0) {
            youLost();
            cout << "The correct word was: " << word << endl;
            break;
        }
    }

    char play_again;
    cout << "Do you want to play again? (y/n): ";
    cin >> play_again;

    if (play_again == 'y' || play_again == 'Y') {
        Play();
    }
    else {
        cout << "Thank you for playing! Goodbye." << endl;
    }
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
