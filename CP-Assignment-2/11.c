/*CP-Assignment-2
Author-Kaushal Lodd
Roll No. T090
Question 11*/

#include<stdio.h>

int reverse_helper (int a);
int main()
{
	int num;
	printf("Enter a number: ");
	scanf("%d",&num);
	printf("Reverse number is: %d\n",reverse_helper(num));
	return 0;		
}
 int reverse_helper (int a)
 {
 	static int rev;
 	int dig;
 	if (a==0)
 		return rev;
 	else 
 	{
 		dig=a%10;
 		rev=rev*10+dig;
 		return reverse_helper(a/10);	
 	}	
 }
