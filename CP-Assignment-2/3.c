/*CP-Assignment-2
Author-Kaushal Lodd
Roll No. T090
Question 3*/

#include<stdio.h>
#include<stdlib.h>

int prime_helper (int a);
int main()
{
	int N,i,j,flag=0;
	printf("Enter the value of N: ");
	scanf("%d",&N);
	if (N%2!=0)
	{	
		printf("Entered number is odd.\nPlease enter an even number to verify Goldbach conjecture\n");
		exit (0);
	}	
	for (i=N-2;i>1;i--)
		for (j=2;j<=i;j++)
			if (i+j==N && prime_helper(i) && prime_helper(j))
			{
				printf("The corresponding two primes adding to %d are %d and %d\n",N,j,i);
				flag=1;
			}	
	if (flag==0)
		printf("Goldbach conjecture does not hold true for ‘%d’\n",N);
	else
		printf("Goldbach conjecture holds true for ‘%d’\n",N);	
	return 0;	
}
 int prime_helper (int a)
 {
 	int i;
 	for (i=2;i<a/2;i++)
 	{
 		if (a%i==0)
 			return 0;
 	}
 	return 1;
 }
