//
// Created by gueas on 09/02/2023.
//
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int a;
    int b;

    printf("Inserire il numero a: ");
    scanf("%d", &a);
    printf("\nInserisci il numero b: ");
    scanf("%d", &b);

    if(a%b==0){// a%b da come risultato il resto della divisione di a/b
        printf("\nIl numero a e' un multiplo di b\n");
    }else{
        printf("\nIl numero a non e' un multiplo di b\n");
    }


    return 0;
}
