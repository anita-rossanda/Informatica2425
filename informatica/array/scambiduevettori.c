/*dati 2 vettori eseguire gli scambi dei valori tra i due vettori*/
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "libArray.c"
#define DIM 10

int main(){
    srand(time(NULL));
    int vettoreA[DIM]={0};
    int vettoreB[DIM]={0};
    valoriRandom(vettoreA, DIM);
    stampaVettore(vettoreA, DIM, '.');
    printf("\n");
    valoriRandom(vettoreB, DIM);
    stampaVettore(vettoreB, DIM, '.');
    scambiaVettore(vettoreA, vettoreB, DIM);
    printf("\nscambio i valori dei vettori:\n");
    stampaVettore(vettoreA, DIM, '.');
    printf("\n");
    stampaVettore(vettoreB, DIM, '.');
}