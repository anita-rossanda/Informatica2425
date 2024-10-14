/*Scrivere un programma che legge 2 orari in ore minuti e secondi e dice quale viene prima dei due.
 (Si risolva l’esercizio senza trasformare tutto in secondi).*/

#include <stdio.h>
int main(){
int ore1=0,ore2=0,min1=0,min2=0;
printf("Inserisci primo orario");
scanf("%d%d",&ore1,&min1);
printf("Inserisci secondo orario");
scanf("%d%d",&ore2,&min2);

    if(ore1>ore2)
        printf("Il primo orario viene dopo");
    
    else if(ore2>ore1)
        printf("Il secondo orario viene dopo");
    else if(ore1==ore2)
        if(min1>min2)
        printf("Il primo orario viene dopo");
    else if(min2>min1)
        printf("Il secondo orario viene dopo");

}
