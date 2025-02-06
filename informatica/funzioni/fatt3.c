#include <stdio.h>
void fattoriale(int *_num, long *_fatt);
int main(){
    int num=0;
    long fatt=1;
    do{
        printf("inserisci un numero: ");
        scanf("%d", &num);
    }while(num<=0);
    fattoriale(&n,&fatt);
    printf("fattoriale è: ",fatt);
}
void fattoriale(int *_num, long *_fatt){
    for(int i=1; i<=*_num; i++){
       *_fatt*=i;
    }
}