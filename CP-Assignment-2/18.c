/*CP-Assignment-2
Author-Kaushal Lodd
Roll No. T090
Question 18*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
	int i,j,n,k,temp;
	srand(time(NULL));
	printf("Enter the number of elements: ");
	scanf("%d",&n);
	int arr[n],Arr[n];
	printf("Array generated by rand() function:\n");
	for (i=0;i<n;i++)
	{
		arr[i]=rand()%10;
		printf("%d ",arr[i]);
	}	
	printf("\nEnter position 'k': ");
	scanf("%d",&k);
	k--;
	for (i=k,j=0;i<n;i++,j++)
		Arr[j]=arr[i];
	for (i=0;i<k;i++,j++)
		Arr[j]=arr[i];
	printf("Modified Array:\n");
	for (i=0;i<n;i++)
		printf("%d ",Arr[i]);
	printf("\n");
	return 0;			
}
