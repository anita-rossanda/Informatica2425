/*Dato numero a più cifre comunicare quale e quante cifre corrispondono alla propria posizione
Esempio: n1=4211 la cifra 1corrisponde alla prima posizione e la cifra 4
corrisponde alla quarta posizione.*/
#include <stdio.h>
int main(){
    int n,posizione=0,q,r;
    do{
        printf("inserisci un numero: ");
        scanf("%d", &n);
    }while(n<=0 && n>1000);
    if(n<10){
        printf("posizione=1");
        scanf("%d", &posizione);
    }
    if(n<100){
        q=n;
        r=q%10;
	    q=q/10;
        printf("posizione=1");
        scanf("%d", &posizione);

    }

    
   
        
        
    
    

    

}