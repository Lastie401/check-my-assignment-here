//simple text file program
/*
Author: Paul Mungai Njoroge
adm:    CT101/G/23420/24
*/
#include<stdio.h>
int main(){
	printf("Enter a sentense into data.txt:\n");
	FILE*fptr;
	fptr=fopen("data.txt","r");
	char content[100];
	while (fgets(content,100,fptr)){
	printf("%s",content);}
    fclose(fptr);
	return 0;	}


	

