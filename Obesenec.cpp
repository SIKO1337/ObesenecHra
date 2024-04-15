#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void Play();

int main() {
    Play();
    return 0;
}

void Play() {
    cout << "Enter a word: ";//zadavame slovo,ktore budeme hadat
    string word;
    cin >> word;
    cout << string(50, '\n');

    int remaining_attempts = word.length(); // pocet pokusov = dlzka slova

    vector<char> guessed_chars; // vector,ktory uschovava zadane charaktery

    bool* guessed = new bool[word.length()]; // pointer, ktory dynamicky alokuje pole hodnot typu bool na sledovanie uhadnutych pismen, ktoreho velkost sa rovna velkosti slova
    for (int i = 0; i < word.length(); ++i) {
        guessed[i] = false; // vsetky indexy v liste su false na zaciatku(este neboli uhadnute)
    }

    while (remaining_attempts > 0)//pokial este zostavajuce pokusy su viac ako 0
    {   
        cout << "Remaining attempts: " << remaining_attempts << endl;//vypis zostavajucich pokusov


        // hrac zadava pismeno
        char letter;
        cout << "Enter a letter you think is in the word: ";
        cin >> letter;
        cout << endl;

        // pozri sa ci charakter uz bol pouzity
        if (find(guessed_chars.begin(), guessed_chars.end(), letter) != guessed_chars.end()) {
            cout << "Character '" << letter << "' has already been guessed." << endl;
            cout << endl;
            continue;
        }

        guessed_chars.push_back(letter); // pridaj uhadnuty charakter do listu

        cout << "You entered: " << letter << endl;//vypis pismenka,ktore sme zadali
        cout << endl;

        // cyklus,ktory hlada ci je zadane pismeno v slove
        bool correct_guess = false;
        for (int i = 0; i < word.length(); ++i) {
            if (word[i] == letter) {
                guessed[i] = true;
                correct_guess = true;
            }
        }

        // ak hrac zada spravne/nespravne pismeno
        if (correct_guess)
        {
            cout << "Correct" << endl;
        }
        else
        {
            cout << "Incorrect" << endl;
            remaining_attempts = remaining_attempts - 1;
        }

        // uhadol hrac vsetky pismena,ak nie hra pokracuje
        bool game_over = true;
        for (int i = 0; i < word.length(); ++i) {
            if (!guessed[i]) {
                game_over = false;
                break;
            }
        }

        // vyhrali/prehrali sme hru
        if (game_over == true) {
            cout << "Congratulations, you guessed the word: " << word << endl;
            break;
        }
        else if (remaining_attempts == 0) {
            cout << "Game over. The word was: " << word << endl;
            break;
        }
    }



    delete[] guessed; // Odstranenie alokovaneho miesta

    char play_again;
    cout << "Do you want to play again? (y/n): ";//chce hrac hrat este raz
    cin >> play_again;

    if (play_again == 'y' || play_again == 'Y') {
        Play();
    }
    else {
        cout << "Thank you for playing! Goodbye." << endl;
    }
}// :O
