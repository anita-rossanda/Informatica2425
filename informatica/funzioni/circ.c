/* Dato il raggio calcolare la circonferenza e l'area del cerchio
Eseguire il passaggio dei parametri per indirizzo*/
#include <stdio.h>
void circonferenza(float *_raggio, float *_circonferenza);
void area(float *_raggio, float *_area);
int main(){
    float r=0,circ=0,a;
    do{
        printf("inserisci il valore del raggio: ");
        scanf("%d", &r);
    }while(r<=0);

    circonferenza(&r,&circ);
    area(&r,&a);

    printf("la circonferenza del cerchio vale:%f",&circ);
    printf("l'area del cerchio vale:%f",&a);
}
void circonferenza(float *_raggio, float *_circonferenza){
    *_circonferenza=*_raggio*2*3.14;
}
void area(float *_raggio, float *_area){
    *_area=*_raggio**_raggio*3.14;
}


