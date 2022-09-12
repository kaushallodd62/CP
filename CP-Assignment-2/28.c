/*CP-Assignment-2
Author-Kaushal Lodd
Roll No. T090
Question 28*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void shift_func (int A[], int n, int k);
int main ()
{
	int n,k;
	printf("Enter the value of n: ");
	scanf("%d",&n);
	int arr[n];
	srand(time(NULL));
	printf("Array generated using rand():\n");
	for (int i=0;i<n;i++)
	{
		arr[i]=rand()%10;
		printf("%d ",arr[i]);
	}
	printf("\nEnter the value of k: ");
	scanf("%d",&k);
	shift_func(arr,n,k);
	return 0;
}
 void shift_func (int A[], int n, int k)
{
	int i,j,B[n];
	for (i=n-k,j=0;j<k;i++,j++)
		B[j]=A[i];
	for (i=0;i<n-k;i++,j++)
		B[j]=A[i];
	printf("Modified Array:\n");
	for (i=0;i<n;i++)
		printf("%d ",B[i]);
	printf("\n");		
}
