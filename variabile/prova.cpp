//
// Created by gueas on 08/02/2023.
//
#include <iostream>
#include <string>

using namespace std;

int main() {
    string InputString;
    int InputInt = 0;
    int result = 0;
    cout << "quanti anni hai?: ";
    getline(cin, InputString);
    InputInt = stoi(InputString);

    cout << 2023-InputInt << " e' l'anno in cui sei nato";
    return 0;
}
