/*creiamo un menu di richieste
1) caricare un array con solo valori pari
2)stampare l array
3)ordina l array tramite la tecnica del bubble sort*/
#include <stdio.h>
#include "libArray.h"
#include "libArray.c"
#define DIM 5

int main(){
    int vett[DIM];
    int scelta;

    do{
        printf("menu");
        printf("\n1 caricare un array con solo valori pari");
        printf("\n2 stampare l array");
        printf("\n3 ordina l array tramite la tecnica del bubble sort");
        printf("\n digita 0 per terminare");
        scanf("%d", &scelta);

        switch(scelta){
            case 1:{
                caricaVettore(vett,DIM);
                break;
            }
            case 2:{
                stampaVettore(vett,DIM, '-');
                break;
            }
            case 3:{
                caricaBubble(vett, DIM);
                break;
            }
            default:
            break;
        }
        }while(scelta!=0);
    }
    