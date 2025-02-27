/*sviluppare un programma in C
 che stampi il triangolo di floyd ES:
N=5
1
2 3
4 5 6
7 8 9 10
11 12 13 14 15*/

#include <stdio.h>
void TriangoloFloyd (int *_num);

int main(){
    int n;

    do{
        printf("inserisci un valore: ");
        scanf("%d",&n);

    }while(n<=0);
    TriangoloFloyd(&n);

}
void TriangoloFloyd (int *_num){
    int cnt=0;
    for(int i=1;i<=*_num;i++){
        for(int j=0;j<i;j++){
            cnt++;
            printf("%d\t",cnt);
        }
        printf("\n");
    }
}