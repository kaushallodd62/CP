#include<stdio.h>

long long int binary (int);
int main ()
{
	int num;
	printf("Enter a number: ");
	scanf("%d",&num);
	printf("Binary= %lld\n",binary(num));
	return 0;
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
