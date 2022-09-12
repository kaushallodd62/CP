/*CP-Assignment-2
Author-Kaushal Lodd
Roll No. T090
Question 17*/

#include<stdio.h>
#include<stdlib.h>

int x;
void iterative_func (int arr[],int n);
void recursive_func (int arr[],int n);
int main()
{
	int i,n,choice;
	printf("1.Iterative Method\n2.Recursive Method\nSelect choice: ");
	scanf("%d",&choice);
	printf("\nEnter number of elements in the array: ");
	scanf("%d",&n);
	int arr[n];
	printf("Enter elements of the array:\n");
	for (i=0;i<n;i++)
	{
		printf("Element %d: ",i+1);
		scanf("%d",&arr[i]);
	}
	printf("Enter the value of x: ");
	scanf("%d",&x);
	switch (choice)
	{
		case 1:	iterative_func(arr,n);
			break;
		case 2:	recursive_func(arr,n);	
			break;
		default:printf("Invalid Entry\n");	
	}
	return 0;
}
 void iterative_func (int arr[],int n)
 {
 	int flag=0;
 	for (int i=0;i<n;i++)
 		for (int j=i+1;j<n;j++)
 			if (arr[i]+arr[j]==x)
 			{	
 				printf("%d+%d= %d\n",arr[i],arr[j],x);
 				flag=1;
 			}	
 	if (!flag)
 		printf("There does not exist two elements in the input array whose sum is exactly %d\n",x);		
 }
 void recursive_func (int arr[],int n)
 {
 	static int c1,c2,Flag;
 	if (c1==n-1)
 	{
 		if (!Flag)
 			printf("There does not exist two elements in the input array whose sum is exactly %d\n",x);
 		else 
 			exit(0);
 	}
 	else if (c2==n)
 	{
 		c1++;
 		c2=c1+1;
 		recursive_func(arr,n);
 	}
 	else 
 	{
 		if (arr[c1]+arr[c2]==x)
 		{	
 			printf("%d+%d= %d\n",arr[c1],arr[c2],x);
 			c2++;
 			Flag=1;
 			recursive_func(arr,n);
 		}
 		else 
 		{
 			c2++;
 			recursive_func(arr,n);
 		}	
 	}
 		
 }
