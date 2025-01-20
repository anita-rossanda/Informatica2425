/*Dato numero a più cifre comunicare quale e quante cifre corrispondono alla propria posizione
Esempio: n1=4211 la cifra 1corrisponde alla prima posizione e la cifra 4
corrisponde alla quarta posizione.*/
#include <stdio.h>
int main(){
    int num, cifra, pos=1, num_q;

    do{
        printf("inserisci un valore: ");
        scanf("%d", &num);
    }while(num<=0);

    num_q=num;
    while(num_q!=0){
        cifra=num_q%10;
        num_q=num_q/10;
        if(cifra==pos)
            printf("\n la cifra %d corrisponde alla sua pos %d", cifra, pos);
        pos++;
    }
}