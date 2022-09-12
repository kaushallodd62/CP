/*CP-Assignment-2
Author-Kaushal Lodd
Roll No. T090
Question 16*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void sort_func (int arr[],int n);
void print_func (int arr[],int n);
int main()
{
	int i,n,temp;
	srand(time(0));
	printf("Enter the number of elements in the array: ");
	scanf("%d",&n);
	int arr[n];
	for (i=0;i<n;i++)
		arr[i]=rand()%20;
	printf("Array generated using rand() function:\n");
	print_func(arr,n);
	sort_func(arr,n);
	printf("Sorted Array:\n");
	print_func(arr,n);
	temp=arr[1];
	arr[1]=arr[n-2];
	arr[n-2]=temp;
	printf("Array after swapping the second smallest and second largest element:\n");
	print_func(arr,n);
	return 0;	
}
 void sort_func (int arr[],int n)
 {
 	int temp;
 	for (int i=0;i<n-1;i++)
 		for (int j=0;j<n-i-1;j++)
 			if (arr[j]>arr[j+1])
 			{
 				temp=arr[j];
 				arr[j]=arr[j+1];
 				arr[j+1]=temp;
 			}
 			
 }
 void print_func (int arr[],int n)
 {
 	for (int i=0;i<n;i++)
 		printf("%d ",arr[i]);
 	printf("\n");	
 }
