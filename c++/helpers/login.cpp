#include <vector>
#include <string>
#include <iostream>
#include <fstream>
#include <math.h>
using namespace std;
//
bool login(){
    const double t = 6;
    double multlog;
    cout << "!------------------------------------" << endl << "! Authorization" << endl;
    cout << "!------------------------------------" << endl;
    string passlog;
    string loginlog;
    string strpass;
    vector<double> vec;
    cout << "! Key: ";
    cin >> multlog;
    cout << "! Login: ";
    cin >> loginlog;
    cout << "! Password: ";
    cin >> passlog;
    ifstream file("passwords/"+loginlog);
    getline(file, strpass);
    file.close();
    string word;
    for (char g : strpass){
        if (g == '|'){
            vec.push_back(stod(word));
            word = "";
        }
        else {
            word += g;
        }
    }
    string newstr;
    int newint;
    char j;
    for (double i : vec){
        newint = (i + t) / multlog;
        j = newint;
        newstr += j;
    }
    return passlog==newstr;
}

