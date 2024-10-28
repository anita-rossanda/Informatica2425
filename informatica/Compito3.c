/*Dato un numero controllare se è divisibile o meno per 3 applicando la regola della somma delle cifre 
che compongono il numero. ES:   dato di input: 123 eseguo la somma delle sue cifre -> 1+2+3=6 -> 
risultato 6 -> ok 6 è multiplo di 3.NNB:
qualora il numero fosse a più cifre vi fermate alla prima somma
delle cifre e poi controllate se il risultato è divisibile per 3*/

#include <stdio.h>
int main(){
    int num=0, cifra1=0,cifra2=0,cifra3=0;
    printf("Inserisci un numero tra 0 e 1000: ");
    scanf("%d",&num);

    cifra1=num%10;
    cifra2=cifra1%10;
    cifra3=cifra2%10;
        if(cifra1+cifra2>9){
            if(cifra3+cifra2+cifra1%3==0)
            printf("è divisibile per 3");
        else 
            printf("non è divisibile per 3");
        } 
        else if(cifra3+cifra2<9){
            if(cifra1+cifra2+cifra3%3==0)
            printf("è divisibile per 3");
        else
            printf("non è divisibile per 3");
        }
}