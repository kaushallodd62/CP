/*CP-Assignment-2
Author-Kaushal Lodd
Roll No. T090
Question 24*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int length_func (_Bool arr[], int n);
int main()
{
	int n;
	printf("Enter the number of elements: ");
	scanf("%d",&n);
	srand(time(NULL));
	_Bool arr[n];
	printf("Array generated by rand():\n");
	for (int i=0;i<n;i++)
	{
		arr[i]=rand()%2;
		printf("%d ",arr[i]);
	}
	printf("\nThe length of the longest sequence of 1’s is: %d\n",length_func(arr,n));
	return 0;
}
 int length_func (_Bool arr[], int n)
 {
 	int i,j,count=0,max_count=0;
 	for (i=0;i<n;i++)
 	{
 		if (arr[i])
			count++;
		else 
			count=0;
 		if (count>max_count)
 			max_count=count;	
 	}
 	return max_count;
 }
