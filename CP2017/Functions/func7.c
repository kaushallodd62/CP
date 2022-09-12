#include<stdio.h>
#include<stdlib.h>
#define MAX 100000

_Bool fibo_check (int);
int main ()
{
	int num;
	printf("Enter number: ");
	scanf("%d",&num);
	printf("%d\n",fibo_check(num));
	return 0;
}
 _Bool fibo_check (int num)
 {
 	int first_term=0,sec_term=1,sum;
 	if (num==0)
 		return 1;
 	while (sum<=num)
	{
		sum=first_term+sec_term;
		first_term=sec_term;
		sec_term=sum;
		if (sum==num)
			return 1;
	}
 	return 0;
 }


