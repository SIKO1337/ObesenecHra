#include <iostream>
#include <stdio.h>
#include <cstdlib>
#include <windows.h>

using namespace std;



void showSkore();
void showMenu();
void gameBoot();
void showPravidla();
void clearConsole();


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
                cout << "Game Started" << endl;
                break;
            }

            else if (volba == 2) {
                showSkore();
                break;
            }

            else if (volba == 3){
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
            cout << "Zadajte platnu odpoved." << endl;
            cin >> volba;
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
        if ((GetAsyncKeyState(0x42) & 0x8000) || (GetAsyncKeyState(0x62) & 0x8000)){
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
