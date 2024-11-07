/*verificare se un numero è potenza del 2 e se lo è determinare l 'esponente*/

#include <stdio.h>
int main(){
    int n=0, q=0,r=0, esponente=0;

    printf("inserisci un numero tra 0 e 10");
    scanf("%d",&n);
        if(n%2==0){
            printf("è potenza di due");}
        

        if(n>=0 && n<=0){
            printf("il numero è una potenza di due");
            if(n==2){
            q=n/2;
            r=n%2;
            if(r==0)
                esponente=esponente+1;
        }
        if(n==4){
            q=n/2;
            r=n%2;
            if(r==0)
                esponente=esponente+2;
        }
        if(n==8){
            q=n/2;
            r=n%2;
            if(r==0)
                esponente=esponente+3;
                printf("l'esponente è: ",&esponente);

      }
       else 
       printf("errore");
}
       
        else
        printf("non è potenza di due");
}
