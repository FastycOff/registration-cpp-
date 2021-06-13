#include "helpers/login.cpp"
#include "helpers/registr.cpp"
#include <string>
#include <vector>
#include <iostream>
#include <fstream>
using namespace std;
int main(){
  //  void registr();
//    registr();
    bool login();
    bool result = login();
    if (result == 1){
        cout << "! " << endl << "! You are in!" << endl;
    }
    else if (result == 0) {
        cout << "! " << endl << "! Failure!" << endl;
    }
    cout << "!------------------------------------" << endl;
    return 0;
}
