/*GENERATA UNA DATA TRA L’ANNO 2000 E L’ANNO 2024 AD OGGI E SAPENDO
CHE GIACOMO HA 20 GIORNI PER CONSEGNARE IL LAVORO ASSEGNATO
COMUNICARE LA DATA DI CONSEGNA.*/
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main(){
    int g1=0,m1=0,anno1=0,bisestile1=0;
        srand(time(NULL));
        g1=rand()%31;
        m1=rand()%12;
        anno1=rand()%2024;

        if(anno1<2000 || anno1>2024){
        printf("Errore");
        }
    if(anno1%100==0){
            if (anno1%400==0){
                bisestile1=1;
            }
        }
        else{
            if (anno1%4==0){
                bisestile1=1;
            }
        }
    if (m1>=1 && m1 <=12){
            if (m1==2){
            if(g1>=1 && g1<=28+bisestile1){
            }
                else{
                    printf("\nErrore");
                }
    }
        else{
            if( m1==11 || m1==4 || m1==6 || m1==9){
                if (g1>=1 && g1<=30){
                }
                    else{
                        printf("\nErrore");
                    }
                }
                else{
                    if (g1>=1 && g1<=31)
                    
                else{
                    printf("\nErrore");
                }
                }       
            }
        }
        else{
            printf("\nErrore");
} 