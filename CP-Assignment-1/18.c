#include<stdio.h>
int main()
{
	int n,i,sum=0;
	printf("Enter the number of elements: ");
	scanf("%d",&n);
	int arr[n];
	for (i=0;i<n;i++)
	{
		printf("Element %d: ",i+1);
		scanf("%d",&arr[i]);
	}
	for (i=0;i<n-1;i++)
		sum=sum+arr[i]*arr[i+1];
	printf("Sum of Product of Consecutive numbers is: %d\n",sum);
	return 0;	
}
