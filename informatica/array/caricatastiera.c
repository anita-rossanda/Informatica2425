/*costruire un array di n elementi con valori letti da tastiera*/
#include <stdio.h>
#define max 5
int main(){
    int v[max];
    for(int i=0; i<max; i++){
        printf("inserisci valore: ");
        scanf("%d",&v[i]);
        printf("array=%d\n",v[i]);
    }
}