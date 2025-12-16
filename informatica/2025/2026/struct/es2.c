/*creare una struct Squadrea contenente le seguenti informazioni:nome,
colore,punteggio.
caricato un massimo di 10 squadre stampare quelle con punteggio superiore a 100*/

#include <stdio.h>
#include <stdlib.h>

typedef struct {
	char nome[20];
	char colore[20];
	int punteggio;
}squadra;
void stampa(squadra *teams, int n){
    int i;
    for(i=0; i<n; i++){
        printf("nome squadra: %s\n", teams[i].nome);
        printf("colore squadra: %s\n", teams[i].colore);
        printf("punteggio: %s\n", teams[i].punteggio);
    }
}
int main(){
    squadra *teams;
    int n;
    int i;

    do{
        printf("inserisci il numero delle squadre(max 10): ");
        scanf("%d", &n);
    }while(n<0 || n>10);

    teams=(squadra*)malloc(sizeof(squadra));
    if(teams==NULL){
        printf("errore durante l allocazione");
        return 1;
    }
    for(i=0; i<n; i++){
        printf("Inserisci il nome della squadra: ");
        scanf("%s", teams[i].nome);
        fflush(stdin);
        printf("Inserisci il colore della squadra: ");
        scanf("%s", teams[i].colore);
        fflush(stdin);
        printf("Inserisci il punteggio: ");
        scanf("%d", &(teams[i].punteggio));
        fflush(stdin);
    }
    stampa(teams,n);
}