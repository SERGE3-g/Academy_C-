//
// Created by gueas on 09/02/2023.
//
#include<stdio.h>
#include<stdlib.h>
//dato in ingresso un lato calcola il volume del cubo.

int main() {
    //printf("Hello, World!\n");
    int lato;
    int volume;
    scanf("%d", &lato);
    printf("il lato e': %d \n", lato);
    volume = lato * lato * lato;
    printf("il volume vale : %d\n", volume);
    return 0;
}