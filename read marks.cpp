//program to read marks
/*
Author: Paul Mungai Njoroge
adm:    CT101/G/23420/24
*/
#include<stdio.h>
int main (){ 
FILE*fptr;	 
	fptr=fopen("Marks.txts","r");
		char content[300
		];
		while(fgets(content,300,fptr)){
			printf("%s",content);
		}
		return 0;
}