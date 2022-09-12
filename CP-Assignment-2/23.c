/*CP-Assignment-2
Author-Kaushal Lodd
Roll No. T090
Question 23*/

#include<stdio.h>

int left,right,left_pos;
int count_func (int arr[], int n);
int main()
{
	int i,n;
	printf("Enter number of elements: ");
	scanf("%d",&n);
	int arr[n];
	printf("Enter sorted elements of the array:\n");
	for (i=0;i<n;i++)
		scanf("%d",&arr[i]);
	printf("Enter left and right integer: ");
	scanf("%d %d",&left,&right);
	for (i=0;i<n;i++)
		if (arr[i]>=left)
		{
			left_pos=i;
			break;
		}
	printf("Number of elements between left and right (both inclusive) are: %d\n",count_func(arr,n));
	return 0;	
}
 int count_func (int arr[], int n)
 {
 	static int count;
 	if (arr[left_pos]>right)
 		return count;
 	else 
 	{
 		count++;
 		left_pos++;
 		count_func(arr,n);
 	}	
 }
