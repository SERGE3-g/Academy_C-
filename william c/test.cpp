//
// Created by gueas on 09/02/2023.
//
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int x; //intero
    char c; //carattere
    char stringa[10];

    printf("Hello World\n");
    printf("Inserisci un intero : ");
    scanf("%d",&x );
    printf("\nLa mia variabile x vale %d \n", x);
    printf("Inserisci un carattere: ");
    scanf("%c", c);
    printf("\nIl mio carattere c vale: %c \n", c);
    printf("Inserisci una stringa: ");
    scanf("%s", stringa);
    printf("\nLa mia stringa vale: %s\n", stringa);



    return 0;
}
