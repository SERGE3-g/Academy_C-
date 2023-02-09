//
// Created by gueas on 09/02/2023.
//
//dato ingresso 3 numeri stampa in ordine crescente.

#include <stdio.h>
#include <stdlib.h>


int main()
{
    int num1;
    int num2;
    int num3;
    scanf("%d", &num1);
    scanf("%d", &num2);
    scanf("%d", &num3);
    printf("stampa nu1: %d \n",num1);
    printf("stampa num2: %d \n",num2);
    printf("stampa num3: %d \n",num3);
    if(num1>= num2 && num2 >= num3){
        printf("il numeri in ordine sono: %d %d %d",num3,num2,num1);
    } else{
        if(num2>=num1 && num1>= num3){
            printf("i numeri in ordine sono: %d %d %d " , num3,num1,num2);
        }else{
            if(num3>=num1 && num1>=num2){
                printf("i numeri in ordine sono: %d %d %d",num2,num1,num3);
            }else{
                if(num3>=num2 && num2>=num1){
                    printf("i numeri in ordine sono: %d %d %d",num1,num2,num3);
                }else{
                    if(num2>=num3 && num3>=num1){
                        printf("i numeri in ordine sono: %d %d %d",num1,num3,num2);
                    }else{
                        if(num1>=num3 && num3>=num2){
                            printf("i numeri in ordine sono: %d %d %d",num2,num3,num1);
                        }
                    }
                }
            }
        }
    }
    return 0;
}
