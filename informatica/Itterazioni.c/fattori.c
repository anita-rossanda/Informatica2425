#include <stdio.h>
void fattori(int *_n);
int main(){
    int n;
    do{
        printf("Inserisci num: ");
        scanf("%d",&n);
    }while(n<=0);

    fattori(&n);
    return 0;
}
void fattori(int *_n){
    int f=2;
    while(f>1 && *_n>1){
        if(*_n%f==0){
            *_n=*_n/f;
            printf("%d*",f);
            f=1;
        }
    f++;
    }
}