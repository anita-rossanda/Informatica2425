/*Richiesti due numeri da tastiera verifica e comunica se sono numeri Amici/Amicali.
Definizione di numeri Amicali: due numeri si dicono amicali se la somma dei divisori del primo
numero è uguale al secondo numero e viceversa.*/
#include <stdio.h>
int main(){
    int num1, num2, i, sum1=0, sum2=0;
    do{
        printf("inserisci un valore: ");
        scanf("%d %d", &num1, &num2);
    }while(num1<=0 || num2<=0);

    for(i=1; i<=num1/2; i++){
        if(num1%i==0)
            sum1+=i;
    }
    for(i=1; i<=num2/2; i++){
        if(num2%i==0)
            sum2+=i;
    }
    if(sum1==num2 && sum2==num1)
        printf("\n i numeri sono amicali");
    else
        printf("\nnon lo sono");
}