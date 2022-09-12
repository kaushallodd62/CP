#include<stdio.h>

long long int binary (int);
int sum_func (int);
int main ()
{
	int num;
	printf("Enter a number: ");
	scanf("%d",&num);
	printf("Sum= %d\n",sum_func(num));
	return 0;
}
 int sum_func (int num)
 {
 	long long int bin;
 	bin=binary(num);
 	printf("Binary= %lld\n",bin);
 	int sum=0;
 	while (bin!=0)
 	{
 		sum+=bin%10;
 		bin/=10;
 	}
 	return sum;
 }
 long long int binary (int num)
 {
 	int rem,k=1;
 	long long int bin=0;
 	while (num>0)
 	{
 		rem=num%2;
 		bin+=rem*k;
 		k=k*10;
 		num/=2;
 	}
 	return bin;
 }
