//
// Created by gueas on 09/02/2023.
//
#include <iostream>
#include <cmath>


/*
 *Scrivere un programma che risolva l’equazione di secondo
 * grado prendendo in input a, b,c
 *
 *     𝑎𝑥2+𝑏𝑥+𝑐=0
 */

using namespace std;

int main() {
    float a, b, c;
    float delta;
    float x1, x2;
    cout << "Inserisci il valore di a: ";
    cin >> a;
    cout << "Inserisci il valore di b: ";
    cin >> b;
    cout << "Inserisci il valore di c: ";
    cin >> c;
    delta = pow(b, 2) - 4*a*c;
    if(delta<0){
        cout << "L'equazione non ha soluzioni reali";
    }else if(delta==0){
        x1 = -b/(2*a);
        cout << "L'equazione ha una soluzione reale: " << x1;
    }else{
        x1 = (-b + sqrt(delta))/(2*a);
        x2 = (-b - sqrt(delta))/(2*a);
        cout << "L'equazione ha due soluzioni reali: " << x1 << " e " << x2;
        if(x1<x2){
            cout << "L'equazione ha due soluzioni reali: " << x1 << " e " << x2;
        }else{
            cout << "L'equazione ha due soluzioni reali: " << x2 << " e " << x1;

        }
    }

    return 0;
}