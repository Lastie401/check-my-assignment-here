//program to calculate compound intrest
/*
Author: Paul Mungai
Date   : 27/9/2024
*/
#include <stdio.h>
#include<math.h>
int main() {
	double  P ,r, A;
	int t,n, intrest;
	//input from the user
	printf("Enter the rate (R) in percentage :");
	scanf("%lf",&r);
	printf("Enter the principal amount (P):");
	scanf ("%lf",&P);
	printf("Enter the number of yeras intrest given(t):");
	scanf("%d",&t);
	printf("enter the No.of times intrest is given per year(n):");
	scanf("%d",&n);
	//conver rate from % to decimal
	r= r/100;
	//calculate compo:und intrest
	A= P*pow(1+r/n,n*t);
	//output
	printf("compound intrest after %d years: %f\n",A-P);
	return 0;
}