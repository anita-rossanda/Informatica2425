//conversione da decimale binario
#include <stdio.h>
#include <math.h>
long converti(int _n);
int main(){
    int n=0;
    long conv=0;
    do{
        printf("Inserisci valore: ");
        scanf("%d",&n);
    }while(n<=0);
    conv=converti(n); //restituisco il valore funale qui
    printf("%ld\n",conv);
}
long converti(int _n){
    int quoz,resto,cnt=0, _conv=0; //cnt=esponente
    quoz=_n;
    while(quoz!=0){
        resto=quoz%2;
        quoz=quoz/2;
        _conv+=resto*pow(10,cnt);
        cnt++;
        
    }
    return _conv;
}