/*Data una sequenza di valori (si termina non appena si inserisce -1) verificare se i divisori dei valori
cadono nell’intervallo [8,38].*/
#include <stdio.h>
int main(){
    int n,div;
    do{
        printf("Inserisci un numero: ");
        scanf("%d",&n);
        for(int i=1; i<=n; i++){
            if(n%i==0){
            div=i;}}
            if(div>=8 && div<=38){
                printf("il divisore %d è compreso tra 8 e 38");
                scanf("%d",&div);
                }
            else{
                printf("il divisore %d non è compreso tra 8 e 38");
                scanf("%d",&div);
            }
            
    }while(n!=(-1));
    }
