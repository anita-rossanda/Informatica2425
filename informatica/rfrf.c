/*Dato numero a più cifre comunicare quale e quante cifre corrispondono alla propria posizione
Esempio: n1=]4211 la cifra 1corrisponde alla prima posizione e la cifra 4
corrisponde alla quarta posizione.*/
#include <stdio.h>
int main(){
    int num, resto, pos=1, quoz;

    do{
        printf("inserisci un numero: ");
        scanf("%d",&num);
    }while(num<=0);

    quoz=num;
    while(quoz!=0){
        resto=quoz%10;
        quoz=resto/10;
        if(resto==pos)
            printf("\n la cifra %d corrisponde alla sua pos %d", resto, pos);
        pos++;
    }
    
}
