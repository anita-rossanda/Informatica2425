/*elimina gli spazi*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

typedef char* String;

void compatta(String buffer, int len){
	if(len>0 && buffer[len-1]=='\n'){
		buffer[len-1]='\0';
		len--;
	}
}

void eliminaSpazi(String frase, int len){
	int i;
	int j;
	for(i=0; frase[i]!='\0'; i++){
		if(frase[i]==' '){
			for(j=i; frase[j]!='\0'; j++){
				frase[j]= frase[j+1];
			}
		}
	}
	
}

int main(){
	char buffer[200];
	String frase;
	int len;
	
	printf("inserisci una stringa\n");
	fgets(buffer, sizeof(buffer), stdin);
	len=strlen(buffer);
	compatta(buffer, len);
	frase = (String)malloc((len+1)*sizeof(char));
	if(frase == NULL){
		printf("ERRORE\n");
		return 1;
	}
	
	strcpy(frase, buffer);
	
	eliminaSpazi(frase, len);
	printf("%s", frase);
	free(frase);
	return 0;
}