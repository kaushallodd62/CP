#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
int main()
{
	int i,j,m,n,trace=0,sum=0,norm;
	srand(time(NULL));
	printf("Enter the dimensions of a square matrix (m x n): ");
	scanf("%d %d",&m,&n);
	int arr[m][n];
	if (m!=n)
	{
		printf("Not a Square Matrix!\nPLease Try Again\n");
		exit (0);
	}
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
	for (i=0;i<m;i++)
	{
		trace=trace+arr[i][i];
		for (j=0;j<n;j++)
		{
			sum=sum+arr[i][j]*arr[i][j];	
		}
	}
	norm=sqrt(sum);
	printf("The trace of the Matrix is: %d\nThe norm of the Matrix is: %d\n",trace,norm);
	return 0;
}
