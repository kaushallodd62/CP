/*CP-Assignment-2
Author-Kaushal Lodd
Roll No. T090
Question 20*/

#include<stdio.h>

int main()
{
	int i,j,n,k;
	printf("Enter the number of elements is the array: ");
	scanf("%d",&n);
	int arr[2*n];
	printf("Enter elements of the array:\n");
	for (i=0;i<n;i++)
		scanf("%d",&arr[i]);
	k=n;	
	for (i=1;i<n;i=i+2)
	{
		arr[k]=arr[i];
		k++;
	}	
	for (i=1;i<=n/2;i++)
		for (j=i;j<k;j++)
			arr[j]=arr[j+1];
	printf("Modified array is: ");	
	for (i=0;i<n;i++)
		printf("%d ",arr[i]);
	printf("\n");		
	return 0;
}
