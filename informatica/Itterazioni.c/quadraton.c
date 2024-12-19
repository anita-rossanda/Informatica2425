/*dato un numero n calcolare il suo quadrato
sommando i primi n numeri dispari
n=7 7^2=49*/
#include <stdio.h>
int main(){
    int n, num, somma=0;
    do{
        printf("Inserisci numero: ");
        scanf("%d", &n);
    }while(n<=0);
    for(int i=1; i<n; i+=2){
        somma+=i;
    }
    printf("%d^2=%d", n, somma);
}