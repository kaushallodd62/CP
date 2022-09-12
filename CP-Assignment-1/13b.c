	#include<stdio.h>
int main()
{
	int n,i,j,temp;
	printf("Enter the number of elements: ");
	scanf("%d",&n);
	int arr[n];
	for (i=0;i<n;i++)
	{
		printf("Element %d: ",i+1);
		scanf("%d",&arr[i]);
	}
	for (i=0,j=n-1;i<j;i++,j--)
	{
		temp=arr[i];
		arr[i]=arr[j];
		arr[j]=temp;
	}
	printf("Elements of reversed array are:\n");
	for (i=0;i<n;i++)
		printf("Element %d: %d\n",i+1,arr[i]);
	return 0;	
}
