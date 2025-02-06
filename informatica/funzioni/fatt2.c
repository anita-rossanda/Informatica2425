#include <stdio.h>
void fattoriale(int _num);
int main(){
    int num=0;
    long fatt;
    do{
        printf("inserisci un numero: ");
        scanf("%d", &num);
    }while(num<=0);
    fatt=fattoriale(num);
    printf("fattoriale è: ",fatt);
}
long fattoriale(int _num){
    long sumfat=1;
    for(int i=1; i<=_num; i++){
       sumfat*=i;
    }
    return sumfat;
}