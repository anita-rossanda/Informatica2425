/*Scrivi un programma che legge in input il valore di tre lati di un triangolo, individua se si tratta di un triangolo equilatero e ne calcola in tal caso l’area e il perimetro*/

#include <stdio.h>
#include <math.h>
int main(){
    float l1, l2, l3, a, p;
    l1=0;
    l2=0;
    l3=0;
    a=0;
    p=0;
    printf("inserisci il primo lato: ");
    scanf("%f", &l1);
    printf("inserisci il secondo lato: ");
    scanf("%f", &l2);
    printf("inserisci il terzo lato: ");
    scanf("%f", &l3);

    if(l1==l2 && l2==l3){
            printf("il triangolo è equilatero: ");
            p= l1+l2+l3;
            a= sqrt(3)*l1/2*l1/2;
            printf("area è %f, il perimetro è %f", a, p);
    }
    else{
        printf("il triangolo non è equilatero"); 
    }


}