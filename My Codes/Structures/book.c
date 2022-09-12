#include<stdio.h>
#include<stdlib.h>

struct Book 
{
	char title[50];
	char author[25];
	int price;
};

void read (struct Book arr[], int n);
int main ()
{
	int i,n;
	printf("Enter the number of books: ");
	scanf("%d",&n);
	struct Book B[n];
	printf("Enter Title, Author name and Price:\n");
	read(B,n);
	printf("\nInformation entered:");
	for (i=0;i<n;i++)
		printf("\nBook %d\nTitle: %s\nAuthor: %s\nPrice: %d\n",i+1,B[i].title,B[i].author,B[i].price);
	return 0;	
}
 void read (struct Book arr[], int n)
 {
 	for (int i=0;i<n;i++)
 	{
 		printf("Book %d\n",i+1);
		printf("Enter Title: ");
 		gets(arr[i].title);
 		gets(arr[i].title);
 		printf("Enter Author: ");
 		gets(arr[i].author);
 		printf("Enter Price: ");
 		scanf("%d",&arr[i].price);
 	}
 }
