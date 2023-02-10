//
// Created by gueas on 10/02/2023.
//

/*  L’utente inserisce un anno ed il programma
   verifica se l’anno inserito è bisestile

   Un anno è bisestile se è divisibile per 4, ma non
   divisibile per 100, oppure se è divisibile per 400.

 */

#include <iostream>
#include <cmath>
#include <string>
#include <time.h>
#include <stdlib.h>


using namespace std;

int main() {
    int anno;
    cout << "Inserisci un anno: ";
    cin >> anno;
    if(anno%4==0 && anno%100!=0 || anno%400==0){
        cout << "L'anno inserito e' bisestile";
    }else{
        cout << "L'anno inserito non e' bisestile";
        if(anno%4==0){
            cout << "L'anno inserito e' divisibile per 4";}
        if(anno%100==0){
            cout << "L'anno inserito e' divisibile per 100";
          }
        if(anno%400==0){
            cout << "L'anno inserito e' divisibile per 400";
        }

          return 0;

        }
    }
