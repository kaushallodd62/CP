/*CP-Assignment-2
Author-Kaushal Lodd
Roll No. T090
Question 25*/

#include<stdio.h>
#define MAX 100

int distinct_num_count (int arr[], int n);
int main ()
{
	int i,n;
	printf("Enter the number of elements in the array: ");
	scanf("%d",&n);
	int arr[n];
	printf("Enter elements of the array:\n");
	for (i=0;i<n;i++)
		scanf("%d",&arr[i]);
	printf("The number of distinct numbers present in the array is: %d\n",distinct_num_count(arr,n));
	return 0;	
}
 int distinct_num_count (int arr[], int n)
 {
 	_Bool H[MAX]={0};
 	int count=0;
 	for (int i=0;i<n;i++)
 	{
 		if (H[arr[i]]==0)
 			count++;
 		H[arr[i]]=1;	
 	}
 	return count;
 }


