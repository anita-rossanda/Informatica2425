#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef char* string;

void flip(string s){
    char tmp;

    for(int i=0; i<strlen(s)/2; i++){
        tmp=s[i];
        s[i]=s[strlen(s)-i-1];
        s[strlen(s)-i-1]=tmp;
    }
}
int main(){
    
    string s=(string)malloc(50*sizeof(char));
    if(s==NULL)
        return 1;
    printf("inserisci la frase: ");
    fgets(s, 50, stdin);

    flip(s);
    printf("\n%s", s);
    free(s);
    return 0;
}