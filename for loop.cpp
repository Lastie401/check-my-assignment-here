//for loop program
/*
Author: paul mungai Njoroge
ADM    :CT1O1/G/23420/24
*/
#include<stdio.h>
int main(){
	int start,stop;
	printf("Enter your start No:");
	scanf("%d",&start);
	printf("Enter your stop No:");
	scanf("%d",&stop);
	printf("%d to %d:\n",start,stop);
	for (int i=start;i<=stop;i++) {
		printf("%d\n",i);}
		return 0;
		
		
}