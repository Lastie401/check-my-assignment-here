//book program
/*
Author: paul mungai Njoroge
ADM    :CT1O1/G/23420/24
*/
#include<stdio.h>
#include<string.h>
	char title[30];
	char author[30];
	int publication;
	char ISBN[13];
	float price;
int main(){
	strcpy(title,"Introduction to c programming");
	strcpy(author,"John Smith");
	publication=2022;
     strcpy(ISBN,"9780131103627");
	price=49.99;
	printf("Book title:   %s\n",title);
	printf("Author:       %s\n",author);
	printf("publication:  %d\n",publication);
	printf("ISBN :        %s\n",ISBN);
	printf("price:        %.2f\n",price);
	return 0;
	
	
}
