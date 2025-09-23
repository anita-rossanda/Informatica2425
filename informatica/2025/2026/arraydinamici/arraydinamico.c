/*Scrivere un programma in C che gestisca un insieme di numeri interi usando un array dinamico.
Il programma deve permettere, tramite menù:
    1. Aggiungere un numero (espandendo l’array con realloc)
    2. Visualizzare tutti i numeri
    3. Cercare un numero specifico
    4. Ordinare i numeri in ordine crescente
    5. Eliminare un numero scelto
    6. Uscire*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int *numeri=NULL; //array diamico
    int dim=0; //quanti elementi ci sono
    int scelta,n,i,trovato=0;

    do{
        printf("\n----MENU----\n");
        printf("1.Aggiungere un numero (espandendo l’array con realloc)\n");
        printf("2. Visualizzare tutti i numeri\n");
        printf("3. Cercare un numero specifico\n");
        printf("4. Ordinare i numeri in ordine crescente\n");
        printf("5. Eliminare un numero scelto\n");
        printf("6. Uscire\n");
        printf("esegui una scelta: ");
        scanf("%d", &scelta);

        switch(scelta){
                case 1:
                    printf("numero da inserire: ");
                    scanf("%d",&n);
                    numeri=(int*)realloc(numeri,(dim+1)*sizeof(int));
                    if(numeri=NULL){
                        printf("errore di allocazione\n");
                        return 1;
                }
                numeri[dim]=n;
                dim++;
                printf("numero aggiunto\n");
            break;
                case 2:
                    printf("contenuto dell'array: ");
                    if(dim==0)
                        printf("array vuoto");
                    else    
                        for(i=0; i<dim; i++){
                            printf("%d", numeri[i]);
                }
            break;
                case 3:
                    printf("numero da cercare: ");
                    scanf("%d",&n);
                    for(i=0; i<dim; i++){
                        if(numeri[i]==n){
                            trovato=1;
                            printf("numero trovato in posizione %d\n",i);
                        }
                    }
                    if(trovato==0){
                        printf("l'elemento non è stato trovato");
                    }
                break;
                default:
			        printf("\n HAI INSERITO UNA SCELTA NON VALIDA");
        }
    }while(scelta!=6);
}