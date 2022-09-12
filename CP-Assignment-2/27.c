/*CP-Assignment-2
Author-Kaushal Lodd
Roll No. T090
Question 27*/

#include<stdio.h>

int k;
_Bool duplicate_finder (int arr[], int n);
int main ()
{
	int i,n;
	printf("Enter the number of elements of the array: ");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the elements of the array:\n");
	for (i=0;i<n;i++)
		scanf("%d",&arr[i]);
	printf("Enter the value of k: ");
	scanf("%d",&k);
	if (duplicate_finder(arr,n))
		printf("Function returned “1” indicating that the array contains at least one duplicate pair within a distance of %d\n",k);
	else 
		printf("Function returned “0” indicating that the array does not contain any duplicate pair within a distance of %d\n",k);
	return 0;	
}
 _Bool duplicate_finder (int arr[], int n)
 {
 	int i,j;
 	for (i=0;i<n;i++)
 		for (j=i+1;j-i<k;j++)
 			if (arr[i]==arr[j])
 				return 1;
 	return 0;			
 }
