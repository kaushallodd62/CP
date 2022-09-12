#include<stdio.h>
int main()
{
	int i,n,num,pos,arr[50];
	printf("Enter the number of elements(MAX 50): ");
	scanf("%d",&n);
	printf("Enter elements of the array\n");
	for (i=0;i<n;i++)
	{
		printf("Element %d: ",i+1);
		scanf("%d",&arr[i]);
	}
	printf("Enter number to be inserted: ");
	scanf("%d",&num);
	printf("Enter position of insertion: ");
	scanf("%d",&pos);
	for (i=n;i>pos-1;i--)
		arr[i]=arr[i-1];
	arr[pos-1]=num;
	printf("Modified array becomes\n");
	for (i=0;i<n+1;i++)
		printf("Element %d: %d\n",i+1,arr[i]);
	return 0;
}
