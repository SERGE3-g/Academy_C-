//
// Created by gueas on 10/02/2023.
//

/*dati ingresso 3 numeri stampali in ordine
      crescente
 */
#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {

        int num1;
        int num2;
        int num3;

        cout << "Inserisci il primo numero: ";
        cin >> num1;
        cout << "Inserisci il secondo numero: ";
        cin >> num2;
        cout << "Inserisci il terzo numero: ";
        cin >> num3;
        cout << endl;
        if(num1<num2 && num1<num3){
            if(num2<num3){
                cout << num1 << " " << num2 << " " << num3;
            }else{
                cout << num1 << " " << num3 << " " << num2;
            }
        }else if(num2<num1 && num2<num3){
            if(num1<num3){
                cout << num2 << " " << num1 << " " << num3;
            }else{
                cout << num2 << " " << num3 << " " << num1;
            }
        }

        return 0;
    }
/*
 * Created by gueas on 10/02/2023.
 */