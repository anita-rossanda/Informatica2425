/*Dato un numero comunicare il numero di cifre di cui è composto e sommarle; verificare inoltre se la
somma è multiplo di 3 di 5 oppure di 7.*/
#include <stdio.h>
int main(){
    int n,num_q,cifra,somma=0;
    do{
        printf("Inserisci un numero: ");
        scanf("%d",&n);
        num_q=n;
        cifra=num_q%10;
        num_q=num_q/10;
        somma+=cifra;
        printf("la somma vale: ");
        scanf("%d",&somma);
    }while(n<=0);

        

    if(somma%3==0){
        printf("è multiplo di 3: ");
        scanf("%d",&somma);
    }
    if(somma%5==0){
        printf("è multiplo di 5: ");
        scanf("%d",&somma);
    }
    if(somma%7==0){
        printf("è multiplo di 7: ");
        scanf("%d",&somma);
    }
    
    
}
