/*assegnati i coefficienti:
-radici equz
-concavita parabola*/
#include <stdio.h>
float RadiciEq(float _a,float _b,float _c);
int main(){
    float a,b,c;

    do{
        printf("inserisci valori di a,b,c: ");
        scanf("%f%f%f",&a, &b,&c);
    }while(a==0 || b==0 || c==0);
}