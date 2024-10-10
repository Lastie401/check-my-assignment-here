//program  for while loop
/*
Author: Paul Mungai Njoroge
ADM:CT101/G/23420/24
*/
#include <stdio.h>
int main (){
	int start,stop;
	printf("Enter your start NO:");
	scanf("%d",&start);
	printf("Enter your stop NO:");
	scanf("%d",&stop);
	while(start<=stop){
		printf("%d\n",start);
	start++;}
return 0;
	
}