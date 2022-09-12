/*CP-Assignment-2
Author-Kaushal Lodd
Roll No. T090
Question 8*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

_Bool jumping_helper (int a);
int main()
{
	int num;
	printf("Enter a number: ");
	scanf("%d",&num);
	if (jumping_helper(num))
		printf("%d is a Jumping Number\n",num);
	else 
		printf("%d is NOT a Jumping Number\n",num);\
	return 0;		
}
 _Bool jumping_helper (int a)
 {
 	if (a==0)
 		return 1;
 	int i,count;
 	count=floor(log10(a))+1;
 	int arr[count];
 	for (i=count-1;i>=0;i--)
 	{
 		arr[i]=a%10;
 		a=a/10;
 	}
 	for (i=0;i<count-1;i++)
 		if (abs(arr[i]-arr[i+1])!=1)
 			return 0;
 	return 1;
 }
