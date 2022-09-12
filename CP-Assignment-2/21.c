/*CP-Assignment-2
Author-Kaushal Lodd
Roll No. T090
Question 21*/

#include<stdio.h>

int main()
{
	int i,j,n,count=0;
	printf("Enter the number of elements: ");
	scanf("%d",&n);
	int arr[n];
	printf("Enter elements of the Array:\n");
	for (i=0;i<n;i++)
		scanf("%d",&arr[i]);
	for (i=0;i<n;i++)
		for (j=i+1;j<n;j++)
			if (arr[i]>arr[j] && (j-i)%2==0)
				count++;
	printf("The number of even-spaced inversions in the array are: %d\n",count);
	return 0;				
}
