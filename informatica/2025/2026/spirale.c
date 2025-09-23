/*rifai in modalità spirale*/
#include <stdio.h>
#include <stdlib.h>
#define N 4

void riempiMat(int _mat[][N]){
    int num=1,i;
    int top=0,bottom=N-1;
    int left=0, right=N-1;

    while(num<=N*N){
        //sinistra verso destra
        for(i=left; i<=right; i++)
            _mat[top][i]=num++;

        top++;
        //alto verso il basso
        for(i=top; i<=bottom; i++)
            _mat[i][right]=num++;
        right--;
        //destra verso sinistra
        for(i=right; i>=left;i--)
            _mat[bottom][i]=num++;
        bottom--;
        //basso verso alto
        for(i=bottom; i>=top;i--)
            _mat[i][left]=num++;
        left++;
    }
}
 void riempiMat(int _mat[][N]){
    for(i=0; i<N; i++){
        for(int j=0; j<N; i++)
            printf("%d\t", _mat[i][j]);
        printf("\n");
    }
}
int main(){
    int mat[N][N];

    riempiMat(mat);
    printf("la matrice a spirale è: ");
    stampaMat(mat);
}