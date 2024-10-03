// Program to calculate simple intrest
/*
Author: Paul Mungai
Date;  27/9/2024
*/
#include  <stdio.h>
#include  <math.h>
int main() {
	//declare variables
	float principal ,rate, time, simpleinterst;
	printf( "Enter principal amount (P):");
	scanf("%f",&principal );
	printf("Enter the  interest rate in percentage(R):");
	scanf("%f",&rate);
	printf("The number of times interest given per year(T):");
	scanf("%f",&time);
	//calculate simpleinterest
	simpleinterst = (principal *rate*time)/100;
	//output
	printf("simpleinterst is : %.2f\n", simpleinterst);
	printf("u are welcomed back");
	return 0;
}   
