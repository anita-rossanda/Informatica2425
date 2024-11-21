/*Scrivi un programma che legge in input il valore di tre lati di un triangolo, individua se si tratta di un triangolo isoscele*/

#include <stdio.h>
#include <math.h>
int main(){
    float l1, l2, l3;
    l1=0;
    l2=0;
    l3=0;
    printf("inserisci il primo lato: ");
    scanf("%f", &l1);
    printf("inserisci il secondo lato: ");
    scanf("%f", &l2);
    printf("inserisci il terzo lato: ");
    scanf("%f", &l3);

    if(l1==l2 || l1==l3 || l2==l3){
        printf("il triangolo è isoscele");
    } else {
        printf("il triangolo non è isoscele");
    }

}