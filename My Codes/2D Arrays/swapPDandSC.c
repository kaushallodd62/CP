#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	int i,j,m,n,temp;
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
		temp=arr[i][i];
		arr[i][i]=arr[i][m-i-1];
		arr[i][m-i-1]=temp;
	}
	puts("Modified Matrix after swapping Principal diagnol and Secondary diagnol:");
	for (i=0;i<m;i++)
	{
		for (j=0;j<n;j++)
			printf("%d ",arr[i][j]);
		printf("\n");
	}
	return 0;	
}
