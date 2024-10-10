/*STABILIRE SE UN NUMERO è DISPARI CONTROLLANDO SE L'ULTIMA è SIGNIFICATIVA*/

#include <stdio.h>
int main (){
    int num=0, cifra=0;
    printf("Inserire un numero: ");
    scanf("%d", &num);

    cifra=num%10;
    if(cifra%2==0)
        printf("Il numero %d è pari",num);
    else
        printf("Il numero %d è dispari",num);
 }