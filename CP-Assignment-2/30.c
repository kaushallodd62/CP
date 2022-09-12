/*CP-Assignment-2
Author-Kaushal Lodd
Roll No. T090
Question 30*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void change_order_iterative (int m, int n, int arr[m][n]);
void change_order_recursive (int m, int n, int arr[m][n]);
void Display (int m, int n, int arr[m][n]);
int main ()
{
	int i,j,m,n,choice;
	srand(time(NULL));
	printf("Enter the dimensions of the matrix (m x n): ");
	scanf("%d %d",&m,&n);
	int arr[m][n];
	printf("The Matrix is:\n");
	for (i=0;i<m;i++)
		for (j=0;j<n;j++)
			arr[i][j]=rand()%10;
	Display(m,n,arr);	
	printf("1.Iterative Method\n2.Recursive Method\nSelect choice: ");
	scanf("%d",&choice);
	switch (choice)
	{
		case 1:	change_order_iterative(m,n,arr);
			break;
		case 2:	change_order_recursive(m,n,arr);	
			break;
		default:printf("Invalid Entry\n");	
	}
	return 0;
}
 void change_order_iterative (int m, int n, int arr[m][n])
 {
 	int i,j,temp;
 	for (i=0;i<((m%2)?m/2+1:m/2);i++)
 		for (j=0;j<n;j++)
 		{
 			if (m%2 && i==m/2 && j==n/2)
 				break;
 			temp=arr[i][j];
 			arr[i][j]=arr[m-i-1][n-j-1];
 			arr[m-i-1][n-j-1]=temp;
 		}
 	printf("Matrix after reversing the order of elements:\n");
 	Display(m,n,arr);
 }
 void change_order_recursive (int m, int n, int arr[m][n])
 {
	static int i,j;
	int temp;
	if (i==((m%2)?m/2+1:m/2) || (m%2 && i==m/2 && j==n/2))
		Display(m,n,arr);
	else if (j==n)
	{
		j=0;
		i++;
		change_order_recursive(m,n,arr);
	}
	else
	{
		temp=arr[i][j];
 		arr[i][j]=arr[m-i-1][n-j-1];
 		arr[m-i-1][n-j-1]=temp;
 		j++;
 		change_order_recursive(m,n,arr);
	}		
 }
 void Display (int m, int n, int arr[m][n])
 {
 	for (int i=0;i<m;i++)
 	{
 		for (int j=0;j<n;j++)
 			printf("%d ",arr[i][j]);
 		printf("\n");	
 	}
 }  
