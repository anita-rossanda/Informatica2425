/*calcolare la somma dei primi n numeri naturali
es:5 1+2+3+4+5*/

#include <stdio.h>
int main(){
    int n, num, somma=0;
    do{
        printf("Inserisci num: ");
        scanf("%d", &n);
    }while(n<=0);

    for(int i=0; i<=n; i++){
      somma+=i;
    }
    printf("La somma di %d numeri è: %d",n,somma);
}