#include <iostream>
#include <string>
#include <vector>
#include <fstream>
using namespace std;

void registr(){
    // постоянная переменная для функции
    const int t = 6;
    cout << "!------------------------------------" << endl << "! REGISTRATION" << endl;
    cout << "!------------------------------------" << endl;
    double mult;
    cout << "! Key: ";
    cin >> mult;
    string passreg;
    string log;
    cout << "! Login: ";
    cin >> log;
    cout << "! Password: ";
    cin >> passreg;
    cout << "!------------------------------------";
    int element;
    string str;
    for (char letter : passreg){
        element = letter;
        str += to_string(element * mult - t) + "|"s;
    }
    ofstream file("passwords/"+log);
    file << str;
    file.close();
    cout << endl;
}

