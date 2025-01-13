/*Scrivi un programma che visualizzi la somma dei quadrati dei primi
12 numeri naturali successivi a 8*
esempio: 9*9+10*10+11*11+12....*/
#include <stdio.h>
int main (){
    int inizio, quantita, somma=0; //8,12
    printf("Inserisci il valore iniziale: ");
    scanf("%d", &inizio);
    do{
    printf("Inserisci quanti elementi vuoi considerare: ");
    scanf("%d", &quantita);
    }while(quantita<=0);
   
    for(int i=inizio+1; i<=inizio+quantita; i++){
        somma+=i*i;
    }
    printf("la somma vale: %d",somma);
}
