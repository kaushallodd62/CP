#include<stdio.h>
int main()
{
	int i,n;
	printf("Enter the value of n: ");
	scanf("%d",&n);
	int arr[n];
	for (i=0;i<n;i++)
	{
		printf("Integer %d= ",i+1);
		scanf("%d",&arr[i]);
	}
	if (arr[0]==0)
		printf("%d\t",arr[0]);
	else
		printf("-\t");
	for (i=1;i<n;i++)
	{
		if (arr[i]==arr[i-1])
			printf("%d\t",arr[i]);
		else
			printf("-\t");	
	}
	printf("\n");
	return 0;
}
