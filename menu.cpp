#include <iostream>
#include <stdio.h>
#include <cstdlib>
#include  <windows.h>

using namespace std;



void showSkore();
void showMenu();
void gameBoot();

void gameBoot() {
    cout << "************************************************************************************************************************" << endl;
    cout << "                        _   _                        __  __                                                             " << endl;
    cout << "                       | | | |                      |  \/  |                                                            " << endl;
    cout << "                       |  _  | / _` || '_ \  / _` | | |\/| | / _` || '_ \                                               " << endl;
    cout << "                       | | | || (_| || | | || (_| | | |  | || (_| || | | |                                              " << endl;
    cout << "                       \_| |_/ \__,_||_| |_| \__, | \_|  |_/ \__,_||_| |_|                                              " << endl;
    cout << "                                              _ / |                                                                     " << endl;
    cout << "                                             |___/                                                                      " << endl;
    cout << "                                                                                                                        " << endl;
    cout << "                                                                                                                        " << endl;
    cout << "                       Autori hry: Samuel Janec, Matus Kvasnovsky, Jakub Burdiak                                        " << endl;
    cout << "                           Pre pokracovanie zmacknite prosim Enter                                                      " << endl;
    cout << "                                                                                                                        " << endl;
    cout << "                                                                                                                        " << endl;
    cout << "                                                                                                                        " << endl;
    cout << "                                                                                                                        " << endl;
    cout << "************************************************************************************************************************" << endl;
      
        while (true) {
        if(GetAsyncKeyState(VK_RETURN) & 0x8000){
            showMenu();
            break;
          }    
        }
    while (true) {
        if (GetAsyncKeyState(VK_ESCAPE) & 0x8000) {
            cout << "Quitting" << endl;
            break;
           }
        }
}

void showMenu(){
        cout << "                                                                                                                     " << endl;
        cout << "                                                                                                                     " << endl;
        cout << "                                                                                                                     " << endl;
        cout << "                                                                                                                     " << endl;
        cout << "                                                                                                                     " << endl;
        cout << "                                                                                                                     " << endl;
        cout << "                                                                                                                     " << endl;
        cout << "                                                                                                                     " << endl;
        cout << "                                                                                                                     " << endl;
        cout << "                                                                                                                     " << endl;
        cout << "                                                                                                                     " << endl;
        cout << "                                                                                                                     " << endl;
        cout << "                                                                                                                     " << endl;
        cout << "                                                                                                                     " << endl;
        cout << "                                                                                                                     " << endl;
        cout << "                                                                                                                     " << endl;
        cout << "                                                                                                                     " << endl;
        cout << "                                                                                                                     " << endl;
        cout << "                                                                                                                     " << endl;
        cout << "                                                                                                                     " << endl;
        cout << "                                                                                                                     " << endl;
        cout << "                                                                                                                     " << endl;
        cout << "                                                                                                                     " << endl;
        cout << "                                                                                                                     " << endl;
        cout << "                                                                                                                     " << endl;
        cout << "                                                                                                                     " << endl;
        cout << "                                                                                                                     " << endl;
        cout << "                                                                                                                     " << endl;

        // ODSKOK ------------------------------------------------------------------------------------------------------------------------------
        int volba;
        cout << "*********************************************************************************************************************" << endl;
        cout << "                                 Menu - Vyberte prosim cislo na zaklade odpovede ()                                  " << endl;
        cout << "1. Hrat                                                                                                              " << endl;
        cout << "2. Statistiky                                                                                                        " << endl;
        cout << "3. Ukoncit                                                                                                           " << endl;
        cout << "                                                                                                                     " << endl;
        cout << "                                                                                                                     " << endl;
        cout << "                                                                                                                     " << endl;
        cin >> volba;
        while (true){
            if (volba == 1 || volba == 2 || volba == 3){
                if (volba == 1 ){
                    cout << "                                                                                                                     " << endl;
                    // Tu sa spustí samotná hra
                    cout << "Game Started" << endl;
                    break;
                }            

                if (volba == 2) {
                    showSkore();
                    break;
                    }

                    if (volba == 3){
                        exit(0);
                        break;
                    }       
                    
            } else {
                    cin.clear();
                    cout << "Zadajte platnu odpoved." << endl;
                    cin >> volba;                 
            }
        }        
    };

void showSkore(){
    cout << "                                                                                                                     " << endl;
    cout << "                                                                                                                     " << endl;
    cout << "                                                                                                                     " << endl;
    cout << "                                                                                                                     " << endl;
    cout << "                                                                                                                     " << endl;
    cout << "                                                                                                                     " << endl;
    cout << "                                                                                                                     " << endl;
    cout << "                                                                                                                     " << endl;
    cout << "                                                                                                                     " << endl;
    cout << "                                                                                                                     " << endl;
    cout << "                                                                                                                     " << endl;
    cout << "                                                                                                                     " << endl;
    cout << "                                                                                                                     " << endl;
    cout << "                                                                                                                     " << endl;
    cout << "                                                                                                                     " << endl;
    cout << "                                                                                                                     " << endl;
    cout << "                                                                                                                     " << endl;
    cout << "                                                                                                                     " << endl;
    cout << "                                                                                                                     " << endl;
    cout << "                                                                                                                     " << endl;
    cout << "                                                                                                                     " << endl;
    cout << "                                                                                                                     " << endl;
    cout << "                                                                                                                     " << endl;
    cout << "                                                                                                                     " << endl;
    cout << "                                                                                                                     " << endl;
    cout << "                                                                                                                     " << endl;
    cout << "                                                                                                                     " << endl;
    cout << "                                                                                                                     " << endl;
    cout << "                                                                                                                     " << endl;
    cout << "                                                                                                                     " << endl;
    cout << "                                                                                                                     " << endl;
    cout << "                                                                                                                     " << endl;
    cout << "                                                                                                                     " << endl;
    cout << "                                                                                                                     " << endl;
    cout << "                                                                                                                     " << endl;
    cout << "                                                                                                                     " << endl;
    cout << "                                                                                                                     " << endl;
    cout << "                                                                                                                     " << endl;
    cout << "                                                                                                                     " << endl;
    cout << "                                                                                                                     " << endl;
    cout << "                                                                                                                     " << endl;
    cout << "                                                                                                                     " << endl;
    cout << "                                                                                                                     " << endl;
    cout << "                                                                                                                     " << endl;      
    cout << "                                                                                                                     " << endl;
    cout << "                                                                                                                     " << endl;
    cout << "                                                                                                                     " << endl;
    cout << "                                                                                                                     " << endl;
    cout << "                                                                                                                     " << endl;

     // Odskok
    cout << "*********************************************************************************************************************" << endl;
    cout << "                                                  STATISTIKY                                                         " << endl;
    cout << "                                   Stlacte enter do aby ste sa vratili do MENU.                                      " << endl;
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
        if(GetAsyncKeyState(VK_RETURN) & 0x8000){
            showMenu();
            break;
          }    
        }
}        
