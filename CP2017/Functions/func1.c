#include<stdio.h>

long long int fact (int a);
int main ()
{
	int num;
	printf("Enter number: ");
	scanf("%d",&num);
	printf("%d!= %lld\n",num,fact(num));
	return 0;
}
 long long int fact (int a)
 {
 	long long int fact=1;
 	for (int i=1;i<=a;i++)
 		fact=fact*i;
 	return fact;	
 }
