#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	int i,j,m,n,p,q;
	srand(time(NULL));
	printf("Enter the dimensions of Matrix A (m x n): ");
	scanf("%d %d",&m,&n);
	int arr1[m][n];
	printf("Enter the dimensions of Matrix B (p x q): ");
	scanf("%d %d",&p,&q);
	int arr2[p][q],prod[m][q];
	if (n!=p)
	{
		printf("Cannot Multiply\nPlease Try again!\n");
		exit (0);
	}
	printf("Elements of Matrix A:\n");
	for (i=0;i<m;i++)
	{
		for (j=0;j<n;j++)
		{
			arr1[i][j]=rand()%10;
			printf("%d ",arr1[i][j]);
		}
		printf("\n");
	}
	printf("Elements of Matrix B:\n");
	for (i=0;i<p;i++)
	{
		for (j=0;j<q;j++)
		{
			arr2[i][j]=rand()%10;
			printf("%d ",arr2[i][j]);
		}
		printf("\n");
	}
	for (i=0;i<m;i++)
	{
		for (j=0;j<q;j++)
		{
			prod[i][j]=0;
			for (int k=0;k<n;k++)
			{
				prod[i][j]=prod[i][j]+arr1[i][k]*arr2[k][j];
			}
		}
	}
	printf("[A]x[B] Matrix:\n");
	for (i=0;i<m;i++)
	{	
		for (j=0;j<q;j++)
			printf("%d ",prod[i][j]);
		printf("\n");	
	}	
	return 0;
}
