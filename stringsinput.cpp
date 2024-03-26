// Author: Samuel Parente
// Exercise: C++ String input

#include <iostream>
#include <string>

using namespace std;

int main(){

    string fullName;
    cout << "Type your full name: ";
    getline (cin, fullName);
    cout << "Your name is: " << fullName;

}