//
// Created by gueas on 09/02/2023.
//


/*
 * Inseriti tre numeri A, B e C dire se B è compreso tra A e C.
 * Se B è compreso tra A e C, stampare "B è compreso tra A e C".
 */


#include <iostream>


using namespace std;

int main() {

    int a;
    int b;
    int c;
    cout << "Inserisci il valore di a: ";
    cin >> a;
    cout << "Inserisci il valore di b: ";
    cin >> b;
    cout << "Inserisci il valore di c: ";
    cin >> c;
    if(a<b && b<c){
        cout << "B e' compreso tra A e C";
    }else{
        cout << "B non e' compreso tra A e C";
    }
    return 0;
}
