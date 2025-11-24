void compatta(String buffer, int len){
	if(len>0 && buffer[len-1]=='\n'){
		buffer[len-1]='\0';
		len--;
	}
}