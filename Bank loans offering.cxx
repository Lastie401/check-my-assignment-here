//program for bank loan offering
/*
Author: Paul Mungai
DATE:27/9/20224
*/
#include<stdio.h>
int main(){
float Age, annualincome;
//input from the user
printf("please ente your age:");
scanf("%f",&Age);
if (Age>=21) {
	printf("continue to the next step.\n");
} else {
	printf("sorry you don't quariffy for a loan.\n");
}
printf("kindly enter your annual income:");
scanf("%f",&annualincome);
if(annualincome>=21) {
	printf("congraturations you qualify for a loan.\n");
} else {
	printf("unfortunately we are unable to offer you a loan at this time.");}
	return 0;
}