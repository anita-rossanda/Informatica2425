/*DATA UNA DATA DA IN FORMATO GG MM AAAA
VERIFICARE SE LA DATA è ACCETTABILE*/
#include <stdio.h>

int main(){

    int giorno=0,mese=0,anno=0,bisestile=0;
    printf("Inserisci il giorno: ");
    scanf("%d", &giorno);
    printf("Inserisci il mese: ");
    scanf("%d", &mese);
    printf("Inserisci l'anno: ");
    scanf("%d", &anno);

    //un anno è bisestile se è multiplo di 4 ma non di 100 oppure multiplo di 400 
    if(anno%100==0){
        if(anno%400==0){
            printf("L'anno è bisestile");
             bisestile=1;
        }
    }
    else {
        if(anno%4==0){
             printf("L'anno è bisestile");
             bisestile=1;
        }
    }
    //controllo del mese
    if(mese>=1 && mese<=12){
        if(mese==2){
            if(giorno>=1 && giorno<=28+bisestile){
                printf("\nLa data è accettabile");            
            }
        }
    }
        else{
            if(mese==11 || mese==4 || mese==6 || mese==9){
                if(giorno>=1 && giorno<=30){
                    printf("\nLa data è accettabile");

                }
                else{
                    if(giorno>=1 && giorno<=31){
                        printf("\nLa data è accettabile");
                    }
                }
            }
        }


}