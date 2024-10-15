/*Il programma letti tre numeri, determini se possono essere considerati in progressione aritmetica; 
una progressione aritmetica è una serie di numeri in cui la differenza tra due numeri successivi è costante.*/

#include <stdio.h>
int main(){
    float num1=0,num2=0,num3=0;
    printf("Inserisci un numero: ");
    scanf("%f", &num1);
    printf("Inserisci un numero: ");
    scanf("%f", &num2);
    printf("Inserisci un numero: ");
    scanf("%f", &num3);
        if(num2-num1==num3-num2)
            printf("è in progressione aritmetica");
        else
            printf("Non è in progressione aritmetica");

}