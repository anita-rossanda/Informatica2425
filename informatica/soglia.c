/*chiedi all'utente di inserire un max di 5 numeri fino a che la somma dei numeri inseriti non supera 100 */

#include <stdio.h>
int main (){
    int num=0;
    int somma=0;
    int superato=0;
    printf("inserisci un numero: ");
    scanf("%d", &num);
    somma=num;
    if(somma>100){
        printf("hai superato la soglia");
        superato=1;
    }
    if(superato==0){
        printf("inserisci un altro numero");
        scanf("%d", &num);
        somma+=num;
    }
    
}