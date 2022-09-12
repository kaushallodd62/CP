#include<stdio.h>
int main()
{
	int arr[10],i,larg,index;
	printf("Enter elements of an array(MAX 10):\n");
	for (i=0;i<10;i++)
	{
		printf("Element %d: ",i+1);
		scanf("%d",&arr[i]);
	}	
	larg=arr[0];
	for (i=1;i<10;i++)
	{
		if (larg<arr[i])
		{
			larg=arr[i];
			index=i;
		}
	}		
	printf("Largest element of the array is element %d which is %d\n",index+1,larg);
	return 0;		
}
