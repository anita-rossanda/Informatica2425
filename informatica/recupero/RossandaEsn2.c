/*DATO UN NUMERO N POSITIVO NON NULLO MINORE DI 20 E UN NUMERO C(tra
1 e 9) STAMPARE TUTTI I MULTIPLI DI C MINORI DI N.*/
#include <stdio.h>
int main(){
    int n=0, c=0, multiplo=0;
    printf("Inserisci n e c");
    scanf("%d%d", &n,&c);
    
    if (n<1 || n>20){
        printf("Errore");
    }
    if (c<1 || c>9){
        printf("Errore");
    }
    
}