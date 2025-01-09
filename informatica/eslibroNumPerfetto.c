/*scrivi un programma che ricerca i primi tre numeri perfetti e li visualizza
n=6 div=1,2,3 somma=1+2+3
6-28-496*/
#include <stdio.h> //pg 223 n 17
int main(){
    int somma=0;

   for(int i=1;i<500;i++){
    for(int j=1;j<=i/2; j++){
        if(i%j==0)
            somma+=j;
        }
        if(somma==i){
            printf("\n Il num %d è un numero perfetto",i);
    }
    somma=0;
   }
}