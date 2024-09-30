/*CALCOLA SE A è IL QUADRATO DI B*/

#include <stdio.h>
int main (){
float a=0,b=0,quadrato=0;
printf("Inserisci il valore di a: ");
scanf("%f",&a);
printf("Inserisci il valore di b: ");
scanf("%f",&b);
quadrato=a*b;
scanf("Il quadrato vale: %.2f", quadrato);
if(a==quadrato){ 
printf("Il primo valore %f corrisponde al quadrato del secondo valore %f",a,b);
}
else { 
printf ("Il primo valore %f non corrisponde al quadrato del secondo valore %f",a,b);
}
}