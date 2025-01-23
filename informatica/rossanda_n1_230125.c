/*Data una sequenza di numeri (si termina non appena si inseriscono due numeri consecutivi uguali),
determinare il minimo e il massimo e verificare se uno è il multiplo/divisore dell’altro.*/
#include <stdio.h>
int main(){
    int n,val,min,max;
    do{
        printf("Inserisci un numero: ");
        scanf("%d",&n);
    }while(n<=0);

    for(int i=1; i<=0; i++){
        printf("Inserisci un valore: ");
        scanf("%d",&val);
    if(i<n){
        i=min;
        printf("il numero minore è: ");
        scanf("%d",&min);
    }
    if(i>n){
        i=max;
        printf("il numero minore è: ");
        scanf("%d",&max);
    }
    if(min%max==0 || max%min==0){
        printf("uno è divisore dell'altro");
        scanf("%d/%d", &max,&min);
        scanf("%d/%d", &min,&max);
    }
    }
}

