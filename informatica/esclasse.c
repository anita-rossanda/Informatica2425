/*Calcola l'area di un triangolo inserendo 
	la base e l'altezza.*/
#include <stdio.h>

	int main(){
	float base=0, altezza=0, area=0; //dichiarazione e inizializzazione
	printf("Inserisci la base: ");
	scanf("%f",&base);
	printf("Inserisci l'altezza: ");
	scanf("%f",&altezza);
	area=(base*altezza)/2;
	printf("L'area del triangolo vale: %.2f",area);


}

	
