/*registrare le informazioni di alcuni libri 
titolo, autore, anno pubblicazione.
array di libri
caricare l array
pubblicare
rimuovere un libro
cercare un libro in base al titolo*/

#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char titolo[40];
    char autore[20];
    int anno;

}libri;

int main(){
    libri libreria[5];
    int i;

    for(i=0; i<5; i++){
        printf("quanti libri vuoi inserire: \n");
        scanf("%s", libreria[i].titolo);
        fflush(stdin);

        printf("titolo che vuoi inserire: \n");
        scanf("%s", libreria[i].autore);
        fflush(stdin);

        printf("autore che vuoi inserire: \n");
        scanf("%s", libreria[i].autore);
        fflush(stdin);

        printf("anno di pubblicazione che vuoi inserire: \n");
        scanf("%d", &libreria[i].anno);
        fflush(stdin);
    }
        
}