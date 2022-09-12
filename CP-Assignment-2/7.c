/*CP-Assignment-2
Author-Kaushal Lodd
Roll No. T090
Question 7*/

#include<stdio.h>

int Peasants_mult (int a,int b);
int main ()
{
	int num1,num2,prod;
	printf("Enter two numbers: ");
	scanf("%d %d",&num1,&num2);
	prod=Peasants_mult(num1,num2);
	printf("Product using Peasants' Algorithm is %d\n",prod);
	return 0;
}
 int Peasants_mult (int a,int b)
 {
 	int sum=0;
 	while (a>0)
	{
		if (a%2!=0)
			sum=sum+b;
		a=a/2;
		b=b*2;	
	}
	return sum;
 }
