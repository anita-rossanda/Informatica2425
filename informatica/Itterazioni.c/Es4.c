/*Dato un numero stampare tutti i suoi divisori*/
#include <stdio.h>
int main(){
    int num, divisore;

    divisore=2;
    printf("inserisci un numero");
    scanf("%d",&num);

    while(divisore<=num/2){
        if(num%divisore==0)
            printf("è un divisore\n", divisore, num);

        divisore++;
    }

}