#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	int i,j,m,n,sum_above=0,sum_below=0;
	printf("Enter the dimensions of the matrix (m x n): ");
	scanf("%d %d",&m,&n);
	srand(time(NULL));
	int arr[m][n];
	if (m!=n)
	{
		printf("Not a Square Matrix!\n");
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
		for (j=i+1;j<n;j++)
			sum_above+=arr[i][j];
	for (i=0;i<m;i++)
		for (j=0;j<i;j++)
			sum_below+=arr[i][j];
	printf("Sum of the elements above the diagonal elements are: %d\n",sum_above);
	printf("Sum of the elements below the diagonal elements are: %d\n",sum_below);
	return 0;
}
