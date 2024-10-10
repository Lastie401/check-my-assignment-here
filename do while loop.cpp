// program for do while loop
/*
Author: Paul Mungai Njoroge
Date:   10/9/2024
adm:    CT101/G/23420/24
*/
#include<stdio.h>
int main() {
	int start,stop;
	printf("Enter the start NO:");
	scanf("%d",&start);
	printf("Enter the stop No:");
	scanf("%d",&stop);
	do{printf("%d\n",start);
		start++;}
		while(start<=stop);
		return 0;
}
