//
// Created by gueas on 10/02/2023.
//


/*Scrivere un programma che stampi sullo
schermo il vostro nome all’interno di un
rettangolo come nell’esempio

                    +--------------+
                    |    Nome      |
                    +--------------+
 *
 */
#include <iostream>


using namespace std;

int main()
{
    string nome;
    nome = "SERGE";
    cout << "Inserisci il tuo nome: ";
    cin >> nome;
    cout << "+--------------+" << endl;
    cout << "|    " << nome << "      |" << endl;
    cout << "+--------------+" << endl;
    return 0;

}