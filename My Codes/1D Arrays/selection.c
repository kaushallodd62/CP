#include<stdio.h>
int main()
{
	int i,j,n,pos,small;
	printf("Enter the number of elements: ");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the elements of the array:\n");
	for (i=0;i<n;i++)
		scanf("%d",&arr[i]);
	for (i=0;i<n-1;i++)
	{
		pos=i;
		small=arr[i];
		for (j=i+1;j<n;j++)
		{
			if (small>arr[j])
			{
				pos=j;
				small=arr[j];
			}
		}
		arr[pos]=arr[i];
		arr[i]=small;
	}
	printf("Array after Selection Sort:\n");
	for (i=0;i<n;i++)
		printf("%d ",arr[i]);
	printf("\n");	
	return 0;
}
