/*CP-Assignment-2
Author-Kaushal Lodd
Roll No. T090
Question 22*/

#include<stdio.h>

int main()
{
	int i,n;
	printf("Enter the number of elements: ");
	scanf("%d",&n);
	int A[n],output[n];
	printf("Enter the elements of the array:\nA[]: ");
	for (i=0;i<n;i++)
		scanf("%d",&A[i]);
	for (i=0;i<n;i++)
	{
		output[i]=1;
		for (int j=0;j<n;j++)
			if (j!=i)
				output[i]=A[j]*output[i];
	}
	printf("Output[]: ");
	for (i=0;i<n;i++)
		printf("%d ",output[i]);
	printf("\n");
	return 0;		
}
