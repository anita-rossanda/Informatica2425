/*calcolare il quoz tra due numeri applicando il metodo
delle sottrazioni successive*/

#include <stdio.h>
int main(){
    int num1, num2,num3, cnt=1, quoz=0;
    do{
        printf("Inserisci il primo valore");
        scanf("%d",&num1);
    }while(num1<=0);

    do{
        printf("Inserisci il primo valore");
        scanf("%d",&num2);
    }while(num2<=0);

    if(num1<num2){
        num3=num2;
        num2=num1;
        num1=num3;
    }
    quoz=num1;
    while(quoz>num2){
            quoz-=num2;
            cnt++;
    }
    printf("risultato è%d",cnt);
    

}
    