/*Dati N numeri in input (N è un numero scelto dall'utente maggiore di 2) determinare il valore più piccolo tra quelli incontrati, indicandone il numero d'ordine (cioè se era il primo numero inserito, il secondo o terzo e così via).*/

#include <stdio.h>

int main(){
    int N=0;
    int val=0;
    int min=0;
    int posizione=0;

    do{
        printf("inserisci un numero: ");
        scanf("%d", &N);
    }while(N<2);

    for(int i=0; i<N; i++){
        printf("inserisci un valore :) : ");
        scanf("%d", &val);
        if(i==0 || val<min){
            min=val;
            posizione=i;
        }
    }
    printf("il valore minimo è %d ed è stato inserito in %d posizione", val, posizione);
    return 0;
}