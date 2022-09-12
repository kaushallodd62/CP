#include<stdio.h>
int main()
{
	int i,n,even=0,odd=0,neg=0;
	printf("Enter number of elements: ");
	scanf("%d",&n);
	int arr[n];
	for (i=0;i<n;i++)
	{
		printf("Element %d: ",i+1);
		scanf("%d",&arr[i]);
	}
	for (i=0;i<n;i++)
	{
		if (arr[i]%2==0)
			even++;
		if (arr[i]%2!=0)
			odd++;	
		if (arr[i]<0)
			neg++;	
	}
	printf("Number of odd numbers are %d\nNumber of even number are %d\nNumber of negative numbers are %d\n",odd,even,neg);
	return 0;	
}
