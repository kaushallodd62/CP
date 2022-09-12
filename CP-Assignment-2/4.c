/*CP-Assignment-2
Author-Kaushal Lodd
Roll No. T090
Question 4*/

#include<stdio.h>

int fibo_term (int a);
int prime_helper (int a);
int main()
{
	int n,i=0,j=1;
	printf("Enter the value of n: ");
	scanf("%d",&n);
	printf("First %d terms of Fibonacci prime series are:\n",n);
	while (i!=n)
	{
		if (prime_helper(fibo_term(j)))
		{	
			printf("%d ",fibo_term(j));
			i++;
		}
		j++;
	}		
	printf("\n");
	return 0;		
}
 int fibo_term (int a)
 {
 	
 	if (a==1 || a==2)
 		return 1;	
 	else 
 		return fibo_term(a-1)+fibo_term(a-2);
 }
 int prime_helper (int a)
 {
 	for (int i=2;i<a/2;i++)
 		if (a%i==0)
 			return 0;
 	if (a==1)
 		return 0;
 	return 1;		
 }
