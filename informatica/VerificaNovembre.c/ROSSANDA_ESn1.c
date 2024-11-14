/*CONTARE IL NUMERO DI CIFRE DI CUI SI COMPONE UN NUMERO DATO E
COMUNICARE QUANTE VOLTE COMPARE LA CIFRA DI VALORE K CHIESTA
ALL’UTENTE.
N.B.: accettare valori che vanno da 0 a 9999
ES: 3 è composto da 1 cifra e supponendo k=5 allora k compare 0 volte, 56 è composto
da 2 cifre e k compare 1 volta*/

#include <stdio.h>
int main(){
    
    int n=0,q=0,r=0,k=0, contatore=0;
    printf("Inserisci un numero tra 0 e 9999: ");
    scanf("%d",&n);

    if(n==0 && n==9999){
        if(n<10){
            q=n/10;
            r=n%10;
                printf("La prima cifra vale: %d",&r);
                if(r==k)
        }
        else if(n<100){
            q=n/10;
            q=r%10;
                printf("La prima cifra vale: %d",&r);
            r=q%10;
            r=q/10;
                printf("La prima seconda vale: %d",&r);

        }
        else if(n<1000){
            q=n/10;
            q=r%10;
                printf("La seconda cifra vale: %d",&r);
            r=q%10;
            r=q/10;
                printf("La seconda cifra vale: %d",&r);
            r=q%10;
            r=q/10;
                printf("La terza cifra vale: %d",&r);
        }
        else{
        q=n/10;
            q=r%10;
                printf("La seconda cifra vale: %d",&r);
            r=q%10;
            r=q/10;
                printf("La seconda cifra vale: %d",&r);
            r=q%10;
            r=q/10;
                printf("La terza cifra vale: %d",&r);
            r=q%10;
            r=q/10;
                printf("La quarta cifra vale: %d",&r);   
        }
       
        }
    else
            printf("non valido");
    }

        
