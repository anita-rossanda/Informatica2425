/*Leggere una sequenza di numeri, visualizzarla. Si termina non 
appena arriva uno zero.*/

#include <stdio.h>
int main(){
    int num=0;

    printf("Inserire un numero: ");
    scanf("%d", &num);
    
    while(num!=0){
        printf("Il valore inserito è: %d, num\n");
        printf("Inserire un numero: ");
        scanf("%d", &num);
    }

}