#include<stdio.h>
int main()
{
	int arr[10],larg1,larg2,i,i1=0,i2;
	printf("Enter the elements of an array (MAX 10):\n");
	for (i=0;i<10;i++)
	{
		printf("Element %d: ",i+1);
		scanf("%d",&arr[i]);
	}
	larg1=larg2=arr[0];
	for (i=1;i<10;i++)
	{
		if (larg1<arr[i])
		{
			larg2=larg1;
			i2=i1;
			larg1=arr[i];
			i1=i;
		}
		else if (larg1>arr[i] && larg2<arr[i])
		{	
			larg2=arr[i];
			i2=i;
		}	
	}
	printf("The largest element of the array is element %d which is %d\nThe second largest element of the array is element %d which is
	%d\n",i1+1,larg1,i2+1,larg2);
	return 0;	
}
