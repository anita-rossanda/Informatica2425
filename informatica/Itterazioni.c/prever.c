/*Dati N numeri in input (N è un numero scelto dall'utente maggiore di 2) determinare il valore più piccolo tra quelli incontrati,
indicandone il numero d'ordine (cioè se era il primo numero inserito, il secondo o terzo e così via).*/
#include <stdio.h>
int main(){
    int n, min, val, pos=0;

    do{
        printf("quanti numeri da confrontare: ");
        scanf("%d",&n);
    }while(n<2);

    for(int i=0; i<n; i++){
        printf("Inserisci num: ");
        scanf("%d",&val);
        if(i==0 || val<n){
            min=val;
            pos=i;
        }
    }
    printf("il valore minimo è %d ed è stato inserito in %d posizione", val,pos);
    return 0;
}