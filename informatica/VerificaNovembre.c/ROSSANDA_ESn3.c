/*DATA UNA COPPIA DI NUMERI INTERI COSTRUIRE UN MENÙ TALE CHE
PREVEDA:
1) LA SOMMA IN VALORE ASSOLUTO;
2) LA DIFFERENZA TRA IL MAGGIORE E IL MINORE;
3) GENERATO UN VALORE K(INTERO) DETERMINARE CHI DEI VALORI SI
AVVICINA DI PIÙ;
4) DETERMINARE SE UNO È MULTIPLO DELL’ALTRO.*/

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){
	float n1=0;
	float n2=0;
	int scelta=0;
    int k=0;


    printf("scegli il primo numero intero: ");
    scanf("%f",&n1);
    printf("scegli il secondo intero: ");
    scanf("%f",&n2);
    
        if(n1<0 || n2<0){
            printf("numeri non validi");
            return 0;
        }


    printf("menù\n");
    printf("1. somma in valore assoulto\n");
    printf("2. differenza\n");
    printf("3.generato un valore k determinare chi dei due valori si avvicina di più\n");
    printf("4.determinare se uno è multiplo dell'altro\n");

    scanf("%f",&scelta);

        switch(scelta){
            case 1:
                printf("la somma vale: %.2f \n", n1+n2);
                break;
        
            case 2:
                printf("la sottrazione vale: %.2f\n", n1-n2);
                    if(n2>n1)
                        printf("la sottrazione vale: %.2f\n", n2-n1);
                break;
            case 3:
                srand(time(NULL));
	            k=rand()%50 +1;
                    printf("k%.2f",k);
                break;
            case 4:
                if(n1%n2){
                    printf("n1 è multiplo di n2");
                }
                if(n2%n1){
                    printf("n2 è multiplo di n1")
                }
                break;
            default:
			    printf("\n HAI INSERITO UNA SCELTA NON VALIDA");
                
        }



}