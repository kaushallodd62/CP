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
	puts("The Matrix is:");
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
		for (j=i+1;j<n;j++)
		{
			temp=arr[i][j];
			arr[i][j]=arr[j][i];
			arr[j][i]=temp;
		}
	}
	puts("Transpose Matrix:");
	for (i=0;i<m;i++)
	{
		for (j=0;j<n;j++)
			printf("%d ",arr[i][j]);
		printf("\n");	
	}
	return 0;
}
