/*Stabilisci se a è maggiore o minore di b*/
#include <stdio.h>
int main(){
    int a=0, b=0;
    printf("Inserisci il valore di a: ");
    scanf("%d",&a);
        printf("Inserisci il valore di b: ");
        scanf("%d",&b);
    if(a==b)
        printf("I due valori sono uguali");
    
    else
        if(a>b)
            printf("a %d è maggiore di b %d",a,b);
        else
            printf("a %d è minore di b %d",a,b);
}