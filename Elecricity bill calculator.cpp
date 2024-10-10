// program for do while loop
/*
Author: Paul Mungai Njoroge
Date:   10/9/2024
adm:    CT101/G/23420/24
*/
#include <stdio.h>
#include <math.h>
int main(){
	int customerid;
	char customername[20];
	float units,charges,Amount,surcharge;
	printf("Enter your Customer ID:");
	scanf("%d",&customerid);
	printf("Enter units Consumed:");
	scanf("%f",&units);
		printf("Enter Customer Name:");
	scanf("%s",&customername);
	 if(units<=199){
	 	charges=1.20;}
	else if(units>=200&& units<=400){
		surcharge=0.15;
		charges=1.50;}
		else if(units>=400&& units<=600){
			surcharge=0.15;
			charges=1.80;}
			else if (units>=600){
				surcharge=0.15;
				charges=2.00;}
//calculate amount
Amount=units*charges;
//output
printf("Customer ID:%d\n",customerid);
printf("Customer Name:%s\n",customername);
printf("Units Consumed:%f\n",units);
printf("Charges per Unit:%f\n",charges);
printf("Total Amount to Pay:%d",Amount);
		
}