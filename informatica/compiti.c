/*Verificare se un numero dato in input è divisibile sia per 3 sia per 5*/
#include <stdio.h>
    int main(){
int a=0;
            printf("Inserisci il valore di a: ");
            scanf("%d",&a);
               
    if(a%3==0)
      if(a%5==0) 
         printf("Il numero %d è divisibile sia per 3 che per 5",a);
      else 
         printf("Il numero %d è divisibile per 3 ma non per 5",a);

    else 
         printf("%d non è divisibile per 3",a);
return 0;
    }
        