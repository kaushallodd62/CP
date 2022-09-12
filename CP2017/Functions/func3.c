#include<stdio.h>

_Bool func (int);
_Bool prime (int);
int main ()
{
	int num;
	printf("Enter a number: ");
	scanf("%d",&num);
	printf("%d\n",func(num));
	return 0;
}
 _Bool func (int num)
 {
 	int count=0;
 	for (int i=2;i<num;i++)
 		if (num%i==0 && prime(i))
 			count++;
 	if (count>2)
 		return 1;
 	else 
 		return 0;		
 }
 _Bool prime (int num)
 {
 	for (int i=2;i<=num/2;i++)
 		if (num%i==0)
 			return 0;
 	return 1;		
 }
