/*CP-Assignment-2
Author-Kaushal Lodd
Roll No. T090
Question 12*/

#include<stdio.h>

int i=1;
_Bool prime_helper (int a);
int main()
{
	int num;
	printf("Enter a number: ");
	scanf("%d",&num);
	printf("%d\n",prime_helper(num));
	return 0;		
}
 _Bool prime_helper (int a)
 {
	i++; 
 	if (i==a)
 		return 1;		
 	if (a%i==0)
 		return 0;
 	else
 		return prime_helper(a);	
 }
