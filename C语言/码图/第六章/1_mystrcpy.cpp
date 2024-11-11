#include<stdio.h>
#include<string.h>
void my_strcpy(char *destination,char *source){
	int i=0;
	if(destination==NULL||source==NULL){
		printf("error");
		return;
	} 
	else{
		for(i=0;source[i]!=' ';i++){
			destination[i]=source[i];
		}
		destination[i]=' ';
	}
}