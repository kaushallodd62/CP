#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,j,m,n;
	printf("Enter the dimensions of a square matrix (m x n): ");
	scanf("%d %d",&m,&n);
	int arr[m][n];
	if (m!=n)
	{
		printf("Not a Square Matrix!\nPLease Try Again\n");
		exit (0);
	}
	printf("Enter elements of the Matrix:\n");
	for (i=0;i<m;i++)
	{
		for (j=0;j<n;j++)
		{
			printf("Element [%d][%d]: ",i,j);
			scanf("%d",&arr[i][j]);
		}
	}
	printf("The Matrix is:\n");
	for (i=0;i<m;i++)
	{
		for (j=0;j<n;j++)
		{
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
	for (i=0;i<m;i++)
	{
		for (j=0;j<n;j++)
		{
			if (i!=j && arr[i][j]!=arr[j][i])
			{
				printf("Matrix is not symmetric!\n");
				exit (0);
			}
		}
	}
	printf("Matrix is symmetric!\n");
	return 0;
}		
