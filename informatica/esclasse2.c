/*
	scrivere il doppio di un numero 
	fornito da tastiera.
*/
#include <stdio.h>

int main(){
	
	int n, doppio; //dichiarazione
	
	n=0;		  //inizializzazione
	doppio=0;

	printf("Inserisci un numnero: ");
	scanf("%d",&n);
	doppio=n+n;
	printf("Il doppio vale: %d", doppio);
	
}
