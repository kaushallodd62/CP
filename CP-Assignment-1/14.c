#include<stdio.h>
int main()
{
	int A[100],B[100],C[100],D[100],i,n;
	printf("Enter the number of elements in Array A[] and B[] (MAX 100): ");
	scanf("%d",&n);
	printf("Enter elements of array A[]\n");
	for (i=0;i<n;i++)
	{
		printf("Element %d: ",i+1);
		scanf("%d",&A[i]);
	}
	printf("Enter elements of array B[]\n");
	for (i=0;i<n;i++)
	{
		printf("Element %d: ",i+1);
		scanf("%d",&B[i]);
	}
	printf("Elements of array C[]=A[]+B[]\n");
	for (i=0;i<n;i++)
	{
		C[i]=A[i]+B[i];
		printf("Element %d: %d\n",i+1,C[i]);
	}
	printf("Elements of array D[]=A[]*B[]\n");
	for (i=0;i<n;i++)
	{
		D[i]=A[i]*B[i];
		printf("Element %d: %d\n",i+1,D[i]);
	}
	return 0;
}

