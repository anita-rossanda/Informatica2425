/*Leggere una serie di numeri interi passati dall’utente dopo aver eseguito una scelta che determini se
stampare i valori in senso crescente o decrescente e fermandosi al primo ‘0’ , tale da stampare solo i
valori che rendono la serie crescente o decrescente e restituire quanti numeri erano stati inseriti.
Esempio: scelta=crescente - l’utente inserisce: 4 10 3 8 16 - numeri inseriti: 5.*/
#include <stdio.h>
int main(){
    int min_max, scelta, num, cnt=0;
    printf("scegli se la sequenza è:");
    printf("1)crescente");
    printf("2)decrescente");
    scanf("%d",&scelta);

    printf("inserisci valore: ");
    scanf("%d", &num);
    min_max=num;

    while(num!=0){
        cnt++;
        switch (scelta){
            case 1:{
                if(num>=min_max){
                    min_max=num;
                    printf("%d \n", min_max);
                }
                break;
            }
            case 2:{
                if(num<=min_max){
                    min_max=num;
                    printf("%d \n", min_max);
                }
                break;
        }
        default:{
            printf("non hai eseguito la scelta giusta");
        }
        }
         printf("\n inserisci un nuovo valore ");
         scanf("%d",&num);
    }
     printf("\nsono stati inseriti %d valori,cnt");

}