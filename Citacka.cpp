#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void read();
void write();
void sucet();

int main() {
    sucet();
    return 0;
}

void read() {
    ifstream subor("data.txt");
    string riadok1, riadok2, riadok3;

    if (subor.is_open()) {
        getline(subor, riadok1);
        getline(subor, riadok2);
        getline(subor, riadok3);
    }

    subor.close();
}

void write() {
    ofstream subor("data.txt");
    subor << "0" << endl;
    subor << "0" << endl;
    subor << "0" << endl;
    subor.close();
}

void sucet() {
    ifstream subor("data.txt");
    string riadok1, riadok2, riadok3;

    if (subor.is_open()) {
        getline(subor, riadok1);
        getline(subor, riadok2);
        getline(subor, riadok3);
    }

    subor.close();

    int c_riadok1 = stoi(riadok1);
    int c_riadok2 = stoi(riadok2);
    int c_riadok3 = stoi(riadok3);

    int a = 5;
    int b = 10;
    int c = 2;

    c_riadok1 += a; 
    c_riadok2 += b; 
    c_riadok3 += c; 

    ofstream zapis("data.txt");
    zapis << c_riadok1 << endl;
    zapis << c_riadok2 << endl;
    zapis << c_riadok3 << endl;
    zapis.close();
}