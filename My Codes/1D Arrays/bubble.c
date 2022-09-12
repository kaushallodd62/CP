#include<stdio.h>
int main()
{
	int i,j,n,temp;
	printf("Enter the number of elements: ");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the elements of the array:\n");
	for (i=0;i<n;i++)
		scanf("%d",&arr[i]);
	for (i=0;i<n-1;i++)
	{
		for (j=0;j<n-i-1;j++)
		{
			if (arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	printf("Array after bubble sort:\n");
	for (i=0;i<n;i++)
		printf("%d ",arr[i]);
	printf("\n");	
	return 0;
}
