/*DATE DUE DATE ESPRESSE IN g, m, a DETERMINARE LA DATA PIU' RECENTE. 
Esempio:  tra la data 5/07/2024 e  14/07/2024  la più recente è il 14/07/2024.*/

#include <stdio.h>
int main (){
    int g1=0,g2=0,m1=0,m2=0,anno1=0,anno2=0,bisestile1=0, bisestile2=0;
    printf("Inserisci giorno mese e anno della prima data");
    scanf("%d%d%d", &g1,&m1,&anno1);
    printf("Inserisci giorno mese e anno della seconda data");
    scanf("%d%d%d",&g2,&m2,&anno2);

    if(anno1%100==0){
            if (anno1%400==0){
                printf("\nL'anno è bisestile");
                bisestile1=1;
            }
        }
        else{
            if (anno1%4==0){
                printf("\nL'anno è bisestile");
                bisestile1=1;
            }
        }
        if (m1>=1 && m1 <=12){
            if (m1==2){
                if(g1>=1 && g1<=28+bisestile1){
                    printf("\nLa data è accettabile");
                }
                else{
                    printf("\nLa data non è accettabile");
                }
            }
            else{
                if( m1==11 || m1==4 || m1==6 || m1==9){
                    if (g1>=1 && g1<=30){
                        printf("\nLa data è accettabile");
                    }
                    else{
                        printf("\nLa data non è accettabile");
                    }
                }
                else{
                    if (g1>=1 && g1<=31)
                        printf("\nLa data è accettabile");
                    
                    else{
                        printf("\nLa data non è accettabile");
                    }
                }
            }
        }
        else{
            printf("\nLa data non è accettabile");
        } 

    if(anno2%100==0){
            if (anno2%400==0){
                printf("\nL'anno è bisestile");
                bisestile2=1;
            }
        }
        else{
            if (anno2%4==0){
                printf("\nL'anno è bisestile");
                bisestile2=1;
            }
        }
        if (m2>=1 && m2 <=12){
            if (m2==2){
                if(g2>=1 && g2<=28+bisestile2){
                    printf("\nLa data è accettabile");
                }
                else{
                    printf("\nLa data non è accettabile");
                }
            }
            else{
                if( m2==11 || m2==4 || m2==6 || m2==9){
                    if (g2>=1 && g2<=30){
                        printf("\nLa data è accettabile");
                    }
                    else{
                        printf("\nLa data non è accettabile");
                    }
                }
                else{
                    if (g2>=1 && g2<=31)
                        printf("\nLa data è accettabile");
                    
                    else{
                        printf("\nLa data non è accettabile");
                    }
                }
            }
        }
        else{
            printf("\nLa data non è accettabile");
        }
//controlliamo quale data è più recente
    if(anno1>anno2)
        printf("La data più recente è: %d%d%d", g1,m1,anno1);
    else if(anno1==anno2){
            if(m1>m2)
                printf("\nLa data più recente è: %d%d%d", g1,m1,anno1);
            else if(m1==m2){
                if(g1>g2)
                    printf("\nLa data più recente è: %d%d%d", g1,m1,anno1);
                    

            }
    }
    
}

    