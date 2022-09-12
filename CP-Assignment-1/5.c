#include<stdio.h>
int main()
{
	int n,i,Esum=0,Osum=0;
	printf("Enter number of elements: ");
	scanf("%d",&n);
	int arr[n];
	printf("Enter elements of array\n");
	for (i=0;i<n;i++)
	{
		printf("Element %d: ",i+1);
		scanf("%d",&arr[i]);
	}
	for (i=0;i<n;i++)
	{
		if (arr[i]%2==0)
			Esum+=arr[i];
		else
			Osum+=arr[i];	
	}
	(Esum<Osum)?printf("Output: %d\n",Osum):printf("Output: %d\n",Esum);
	return 0;
}
