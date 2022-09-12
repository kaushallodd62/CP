/*CP-Assignment-2
Author-Kaushal Lodd
Roll No. T090
Question 2*/

#include<stdio.h>

int sum_helper (int a, int b);
int fact_helper (int a);
int main()
{
	int n,k,sum;
	printf("Enter the value of n and k: ");
	scanf("%d %d",&n,&k);
	sum=sum_helper(n,k);
	printf("Sum of the series is: %d\n",sum);
	return 0;
}
 int sum_helper (int a, int b)
 {
 	int i,sum=0;
 	for (i=0;i<=b;i++)
 		sum+=fact_helper(a)/(fact_helper(a-i)*fact_helper(i));
 	return sum;
 }
 int fact_helper (int a)
 {
 	if (a==1 || a==0)
 		return 1;
 	else 
 		return a*fact_helper(a-1);	
 }
