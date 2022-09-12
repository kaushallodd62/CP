/*CP-Assignment-2
Author-Kaushal Lodd
Roll No. T090
Question 26*/

#include<stdio.h>

int compact (int arr[], int n);
int main ()
{
	int i,n,newlength;
	printf("Enter the number of elements of the array: ");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the elements of the array:\n");
	for (i=0;i<n;i++)
		scanf("%d",&arr[i]);
	newlength=compact(arr,n);
	printf("\nLength of Modified Array: %d\n",newlength);
	return 0;	
}
 int compact (int arr[], int n)
 {
 	int i=1;
 	while (i!=n)
 	{
 		if (arr[i]==arr[i-1])
 		{
 			for (int j=i;j<n;j++)
 				arr[j]=arr[j+1];
 			n--;	
 		}
 		else 
 			i++;
 	}
 	printf("Modified Array:\n");
 	for (i=0;i<n;i++)
 		printf("%d ",arr[i]);		
 	return n;		
 }
