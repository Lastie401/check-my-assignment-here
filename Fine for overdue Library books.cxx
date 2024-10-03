// Alibrary program
/*
Author: Paul Mungai
Date   :27/9/2024
admission NO: CT101/G/23420/24
*/
#include<stdio.h>
#include<math.h>
int  main() {
int bookid,duedate,returndate,daysoverdue,finerate,fineamount;
// user to input
printf("Kindlly enter the book ID:");
scanf("%d",&bookid);
printf("kindly enter the Due Date:");
scanf("%d",&duedate);
printf("kindly enter the return date:");
scanf("%d",&returndate); 
//calculate fine rate
if (daysoverdue<=7) {
	finerate=20;
	daysoverdue=returndate-duedate;
	fineamount=daysoverdue*finerate;}
	else if (daysoverdue<=20){
		finerate=70;
		daysoverdue=returndate-duedate;
		fineamount=daysoverdue*finerate;}
	else { finerate=100;
	daysoverdue=returndate-duedate;
	fineamount=daysoverdue*finerate;
printf("\nThe days overdue is;%d",daysoverdue);
printf("\nThe fine amount is : %d",fineamount);
printf("\nThre book ID IS: %d",bookid);
printf("\nThe due date is:%d\n",duedate);
printf("\n The return date is:%d",returndate);
printf("\nThe fine rate is:%d",finerate);
		
	}

	
	 
}