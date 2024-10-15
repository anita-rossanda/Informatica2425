/*Il programma legge tre numeri e dice se possono essere le lunghezze dei lati di un triangolo 
(perché un triangolo possa essere tale la somma di ogni coppia lati deve essere maggiore dell’altro)*/
#include <stdio.h>
int main(){
    float a=0,b=0,c=0;
    printf("Inserisci la lunghezza dei tre lati");
    scanf("%f%f%f",&a,&b,&c);
        if(a+b>c && a+c>b && b+c>a)
            printf("è un triangolo");
        else
            printf("Non è un triangolo");
        
}