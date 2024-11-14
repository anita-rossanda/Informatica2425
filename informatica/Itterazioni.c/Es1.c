/*Dati 5 valori stamparli*/

#include <stdio.h>
int main(){
    int num=0, cnt=0; //contatore inizializzata a 0

    while(cnt<5){
        printf("Inserire un numero:");
        scanf("%d",&num);
        cnt++;
        printf("Il valore inserito è: %d", num);
    }
}
