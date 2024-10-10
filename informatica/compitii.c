/*Dati 3 numeri stampare il più piccolo, il più grande e la loro media aritmetica.*/
#include <stdio.h>
int main(){
    float n1=0,n2=0,n3=0,media=0,max=0,min=0;
    printf("Inserisci i tre valori: ");
    scanf("%f%f%f",&n1, &n2, &n3);

    max=n1;
    min=n1;
    if(max<n2){
        max=n2;
        if(max<n3)
            max=n3;
    }
   
    printf("Il massimo è: %f", max);
    if(min>n2){
        min=n2;
        if(min>n3)
            min=n3;
    }
   
    printf("Il minimo è: %f", min);

media=(n1+n2+n3)/3;
printf("La media vale: %f",media);
}