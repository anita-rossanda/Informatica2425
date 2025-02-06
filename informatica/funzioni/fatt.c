#include <stdio.h>
void mostrafattoriale(int _n, long int _fattoriale);
int main(){
    int num, fattoriale;
    do{
        printf("inserisci un numero: ");
        scanf("%d", &num);
    }while(num<=0);
    mostrafattoriale(num, fattoriale);
return 0;
}
void mostrafattoriale(int _n, long int _fattoriale){
    _fattoriale=1;
    for(int i=1; i<=_n; i++){
        _fattoriale*=i;
    }  
    printf("il calcolo del fattoriale di %d vale %ld: ",_n, _fattoriale);
}