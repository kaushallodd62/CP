#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main ()
{
	int i,j,m,n,det;
	printf("Enter the dimensions of the matrix (m x n): ");
	scanf("%d %d",&m,&n);
	int arr[m][n];
	printf("The Matrix is:\n");
	for (i=0;i<m;i++)
	{
		for (j=0;j<n;j++)
		{
			arr[i][j]=rand()%10;
			printf("%d ",arr[i][j]);			
		}
		printf("\n");	
	}
	
}
