/*Scrivere un programma in linguaggio C che calcoli e visualizzi il codice fiscale (senza il carattere di controllo finale)
chiedendo all’utente di inserire nome, cognome, data di nascita nel formato GG/MM/AAAA, sesso (M o F).
Sarà necessario verificare la correttezza degli input, quindi nome e cognome devono essere composti solo da lettere;
la data deve essere composta solo da numeri (oltre agli eventuali /, si può scegliere se far inserire un valore della data alla volta
o tutta la data con il separatore /); il sesso può avere solo la lettera M o F.
Per il controllo di nome, cognome e data, si suggerisce di leggere l’input carattere per carattere usando getchar().*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

typedef char* Stringa;
void clear_buffer() {
    int buffer;
    while ((buffer = getchar()) != '\n'){}
}
int main(){
    Stringa nome[20];
    Stringa cognome[20];
    Stringa DataNascita[20];
    char sesso;

    printf("Inserisci il tuo nome: ");
    scanf("%s", nome);
    clear_buffer();
    printf("Inserisci il tuo cognome: ");
    scanf("%s", cognome);
    clear_buffer();
    printf("Inserisci la tua data di nascita: ");
    scanf("%s", DataNascita);
    clear_buffer();
    printf("Inserisci il tuo sesso: ");
    scanf("%s", sesso);
    clear_buffer();
    

}