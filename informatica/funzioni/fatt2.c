#include <stdio.h>
long fattoriale(int _num);
int main(){
    int num=0;
    long fattoriale;
    do{
        printf("inserisci un numero: ");
        scanf("%d", &num);
    }while(num<=0);
    fattoriale=_fattoriale(num);
}
long fattoriale(int _num){
    long sumfat=1;
    for(int i=1; i<=_num; i++){
       sumfat*=i;
    }
    return sumfat;
}