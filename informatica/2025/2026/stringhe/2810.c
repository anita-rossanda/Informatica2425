/*provare la libreria string.h per le seguenti operazioni:
1. calcolo lunghezza stringa 
2. controllare se due stringhe sono uguali
3. copiare una stringa 
4. cercare un carattere e comunicare la frequenza
5. concatenare due stringhe
6. ricerca di una stringa nell'altra*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef char* stringa;

int main(){
    stringa s1;
    stringa s2;
    stringa s3;
    int n,scelta,c,decisione;

    printf("quanto vuoi che sia lunga la prima stringa:");
    scanf("%d", &n);
    s1 = (stringa)malloc(n * sizeof(char));
    if(s1==NULL)
        return 1;

    printf("quanto vuoi che sia lunga la seconda stringa:");
    scanf("%d", &n);
    s2 = (stringa)malloc(n * sizeof(char));
    if(s2==NULL)
        return 1;

    printf("\ninserisci la prima stringa:");
    fgets(s1, n, stdin);
    printf("\ninserisci la seconda stringa:");
    fgets(s2, n, stdin);


    while(scelta!=7){
        printf("\n1. calcolo lunghezza stringa");
        printf("\n2. controllare se due stringhe sono uguali ");
        printf("\n3. copiare una stringa");
        printf("\n4. cercare un carattere e comunicare la frequenza");
        printf("\n5. concatenare due stringhe");
        printf("\n6. ricerca di una stringa nell'altra");
        printf("\n7. uscire dal programma");

        scanf("%d", &scelta);
    
        switch(scelta){
            case 1:{
                int len;
                len=strlen(s1);
                printf("la stringa é lunga: %d", len);
            break;
            }
            case 2:{
                strcmp(s1,s2);
                if(strcmp==0)
                    printf("\n stringhe sono uguali !!");
                else 
                    printf("le stringhe non sono uguali");
                
            break;
            }
            case 3:{
            printf("\nquale stringa vuoi copiare? ");
            printf("\ndigita 1 se voi copiare la prima");
            printf("digita 2 se vuoi copiare la seconda");
            scanf("%d", &decisione);
                if(decisione==1)
                    strcpy(s3, s1);
                else if(decisione==2)
                    strcpy(s3, s2);

            printf("\nla stringa 3 è: ");
            fgets(s3, n, stdin);
            decisione=0;
            
            break;
            }
            case 4:{
                printf("che carattere vuoi cercare? ");
                scanf("%d", &c);
                printf("in quale stringa? ");
                scanf("%d", &c);
                strchr(s1,c);
            break;
            }
        }
    }
}
