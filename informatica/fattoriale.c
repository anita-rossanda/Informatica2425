/*Scrivi un programma che esegue il calcolo del fattoriale
di un numero num inserito.*/
#include <stdio.h>
int main(){
    int num, fattoriale=1;
    do{
        printf("inserisci un numero: ");
        scanf("%d", &num);
    }while(num<=0);
    for(int i=1; i<=num; i++)
        fattoriale*=num;
    printf("il calcolo del fattoriale di %d vale %d: ",num, fattoriale);
    
}