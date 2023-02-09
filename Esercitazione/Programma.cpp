//
// Created by gueas on 09/02/2023.

//esercizio 1

//Scrivi un programma che chieda all'utente di inserire un numero intero e stampi se è pari o dispari.

#include <iostream>

using namespace std;

/*int main() {
    int numero;
    cout << "Inserisci un numero intero: ";
    cin >> numero;
    if(numero%2==0){
        cout << "Il numero e' pari";
    }else{
        cout << "Il numero e' dispari";
    }
    return 0;
}*/


// Esercizio 2

/*
 *Scrivi un programma che chieda all'utente di inserire il prezzo di un prodotto e
 * il numero di rate che desidera pagare.
 * Il programma deve calcolare e stampare il costo totale del prodotto
 * tenendo conto dell'interesse del 5% per ogni rata.
 */

int main() {
    float prezzo;
    int rate;
    float totale;
    cout << "Inserisci il prezzo del prodotto: ";
    cin >> prezzo;
    cout << "Inserisci il numero di rate: ";
    cin >> rate;
    totale = prezzo + (prezzo*0.05*rate);
    cout << "Il prezzo totale e': " << totale;
    return 0;
}


// Esercizio 3
/*
 * Scrivi un programma che chieda all'utente quanti anni ha e stabilisca se può andare al bar a bere una birra.
 * In base alla legislazione del tuo paese, le persone devono avere almeno 18 anni per bere alcolici.
 * Se l'utente ha meno di 18 anni, il programma deve stampare un messaggio del tipo "Mi dispiace,
 * sei troppo giovane per bere birra".
 * Altrimenti, deve stampare "Cheers! Buon divertimento al bar!".
 */

/*int main() {
    int eta;
    cout << "Quanti anni hai?: ";
    cin >> eta;
    if(eta<18){
        cout << "Mi dispiace, sei troppo giovane per bere birra";
    }else{
        cout << "Cheers! Buon divertimento al bar!";
    }
    return 0;
}*/



