/*Scrivi un programma che effettua il calcolo della media dei voti della
pagella, inserendoli uno alla volta e chiedendo a ogni inserimento 
di un numero se i voti da inserire sono terminati accettando come 
risposta S oppure N*/
#include <stdio.h>
int main(){
    int voto;
    do{
        printf("inserisci il voto: ");
        scanf("%d", &voto);
    }while(voto<0)
}