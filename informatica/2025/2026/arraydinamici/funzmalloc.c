/*crea un array dinamico chiedendo all utente la sua dim
il programma deve prevedere le seguenti funzioni:
1. crea l array
2. inserisce gli elementi nell array
3. stampa dei valori
4. esci*/
#include <stdio.h>
#include <stdlib.h>
int* creaVett(int _n){
    int *_vettore=(int*)malloc(_n *sizeof(int));
    if(_vettore==NULL);{
        printf("errore di allocazione\n");
        return 1;
    }
    return _vettore;
}
int* inserisciValori(int *_vettore,int _n){
    for(i=0; i<_n; i++){
        printf("inserisci l elemento: ");
        scanf("%d", &_vettore[i]);
    }
    return _vettore;
}

void stampaVett(int *_vettore, int _n){
    printf("hai inserito i seguenti elementi: ");
    for(i=0; i<_n; i++){
        printf("%d\t",_vettore[i]);
    }
    printf("\n");
}

int main(){
    int *vettore=NULL; //puntatore al vettore
    int n;

    do{
    printf("inserisci la quantità degli elementi: ");
    scanf("%d", &n);
    }while(n<0);

    vettore=creaVett(n);
    vettore=inserisciValori(vettore,n);
    stampaVett(vettore,n);

    free(vettore);
}