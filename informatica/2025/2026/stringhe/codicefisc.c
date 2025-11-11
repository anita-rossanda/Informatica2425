#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef char* stringa;
typedef int* array;

void clear_buffer() {
    int buffer;
    while ((buffer = getchar()) != '\n'){}
}

int main(){
    stringa nome[30];
    stringa codice [20];
    stringa cognome[30];
    int anno;
    char mese;
    int giorno;
    char sesso;
    int cntc=0;
    int j =0;
    
    printf("Inserisci il nome: ");
    scanf("%s",nome);
    clear_buffer();

    printf("\nInserisci il cognome: ");
    scanf("%s",cognome);
    clear_buffer();

    printf("\nDi che anno sei?: ");
    scanf("%d",&anno);
    clear_buffer();

    printf("\nIn che mese sei nato? A = gennaio,B = febbraio, C = marzo, D = aprile, E = maggio, H = giugno, L = luglio, M = agosto, P = settembre, R = ottobre, S = novembre, T = dicembre: ");
    scanf("%c, &mese");
    clear_buffer();

    printf("\nIn che giorno sei nato?: ");
    scanf("%d, &giorno");
    clear_buffer();

    printf("Di che sesso sei? Inserisci 'm' se sei maschio o 'f' se sei femmina: ");
    scanf("%c", &sesso);
    clear_buffer();

    for(int i=0; i<=strlen(cognome); i++){
        if(cognome[i]!='a' && cognome[i]!='e' && cognome[i]!='i' && cognome[i]!='o' && cognome[i]!='u'){
            codice[j++]=cognome[i];
            cntc++;
        }
    }
    if(cntc<3){
        for(int i=0; i<=strlen(cognome); i++){
            if(cognome[i]=='a'||cognome[i]=='e'||cognome[i]=='i'||cognome[i]=='o'||cognome[i]=='u'){
                codice[j++]=cognome[i];
            }
        }
    }
}
