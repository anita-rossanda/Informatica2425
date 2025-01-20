/*Leggere una serie di numeri interi passati dall’utente dopo aver eseguito una scelta che determini se
stampare i valori in senso crescente o decrescente e fermandosi al primo ‘0’ , tale da stampare solo i
valori che rendono la serie crescente o decrescente e restituire quanti numeri erano stati inseriti.
Esempio: scelta=crescente - l’utente inserisce: 4 10 3 8 16 - numeri inseriti: 5.*/
#include <stdio.h>
int main(){
    int n1,n2,n3,n4,scelta;
    printf("inserisci crescente o decrescente");
    scanf("%d",&scelta);
do{
    printf("inserisci un numero : ");
    scanf("%d", &n1);
    printf("inserisci un numero : ");
    scanf("%d", &n2);
    printf("inserisci un numero : ");
    scanf("%d", &n3);
    printf("inserisci un numero : ");
    scanf("%d", &n4);
}while(n1<=0 && n1<=0 && n3<=0 && n4<=0);


    
}
    
