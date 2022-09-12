//Three ways of passing a 2-D Array

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void display (int m, int n, int *ptr);
void show (int m, int n, int (*ptr)[n]);
void print (int m, int n, int arr[m][n]);
int main ()
{
	int m,n;
	srand(time(NULL));
	printf("Enter the dimensions of a Matrix (m x n): ");
	scanf("%d %d",&m,&n);
	int arr[m][n];
	for (int i=0;i<m;i++)
		for (int j=0;j<n;j++)
			arr[i][j]=rand()%10;			
	display(m,n,arr);
	show(m,n,arr);
	print(m,n,arr);
	return 0;
}
 void display (int m, int n, int *ptr)
 {
 	printf("Display Function:\n");
 	int i,j;
 	for (i=0;i<m;i++)
 	{
 		for (j=0;j<n;j++)
 			printf("%d ",*(ptr+i*n+j));
 		printf("\n");	
 	}
 	printf("\n");
 }
 void show (int m, int n, int (*ptr)[n])
 {
 	printf("Show Function:\n");
 	int i,j,*p;
 	for (i=0;i<m;i++)
 	{
 		p=ptr+i;
 		for (j=0;j<m;j++)
 			printf("%d ",*(p+j));
 		printf("\n");	
 	}
 	printf("\n");
 	/*	OR
 	for (i=0;i<m;i++)
 	{
 		for (j=0;j<n;j++)
 			printf("%d ",*(*(ptr+i)+j));	CODE IN BLUE AND PRINT FUNCTION IS THE BEST METHOD (WITHOUT ANY WARNING)!
 		printf("\n");	
 	}
 	*/
 }
 void print (int m, int n, int arr[m][n])
 {
 	printf("Print Function:\n");
 	int i,j;
 	for (i=0;i<m;i++)
 	{
 		for (j=0;j<n;j++)
 			printf("%d ",arr[i][j]);
 		printf("\n");	
 	}
 	printf("\n");
 }
 
