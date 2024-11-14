/*Leggere una sequenza di numeri, visualizzarla e determinare quanti
numeri sono stati inseriti. Si termina non 
appena arriva uno zero.*/

#include <stdio.h>
int main(){
    int num=0, cnt=1;

    printf("Inserire un numero: ");
    scanf("%d", &num);
    
    while(num!=0){
        printf("Il valore inserito è: %d\n", num);
        printf("Inserire un numero: ");
        scanf("%d", &num);
        cnt++;

    }

    printf("I valori inseriti sono: %d", cnt);

}