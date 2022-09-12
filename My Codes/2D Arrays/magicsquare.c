#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
bool isMagicSquare (int m, int n, int arr[][n]);
int main()
{
	int i,j,m,n;
	bool flag;
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
	flag=isMagicSquare(m,n,arr);
	flag==1?printf("It is a Magic Square Matrix!\n"):printf("It is not a Magic Square Matrix!\n");
	return 0;
}

  bool isMagicSquare (int m, int n, int arr[][n])
  {
  	int i,j,k,Rsum,Csum,PDsum=0,SDsum=0;
  	for (i=0;i<m;i++)
  		PDsum+=arr[i][i];
  	for (i=0;i<m;i++)
  		SDsum+=arr[i][m-i-1];
  	if (PDsum!=SDsum)
  		return false;	
  	for (i=0;i<m;i++)
  	{	
  		Rsum=0;
  		for (j=0;j<n;j++)
  		{
  			Rsum+=arr[i][j];
  		}
  		if (Rsum!=PDsum)
  			return false;
  	}	
  	for (j=0;j<n;j++)
  	{	
  		Csum=0;
  		for (i=0;i<m;i++)
  		{
  			Csum+=arr[i][j];
  		}
  		if (Csum!=PDsum)
  			return false;
  	}
  	return true;  	
  }	
