#include<stdio.h>
int main()
{	
	int arr[20],i,n,count[20];
	printf("Enter the number of elements in the array(MAX 20): ");
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		printf("Element %d: ",i+1);
		scanf("%d",&arr[i]);
	}	
	
}
