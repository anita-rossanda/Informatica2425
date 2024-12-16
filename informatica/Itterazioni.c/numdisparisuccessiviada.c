/*stampa i primi n numeri dispari succesivi al numero a*/

#include <stdio.h>
int main(){
    int n, a;
    do{
        printf("Inserisci num: ");
        scanf("%d", &n);
    }while(n<=0);
    do{
        printf("Inserisci a: ");
        scanf("%d", &a);
    }while(a<0);

}