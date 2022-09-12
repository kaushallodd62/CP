/*CP-Assignment-2
Author-Kaushal Lodd
Roll No. T090
Question 6*/

#include<stdio.h>
#include<stdbool.h>

bool Palindrome_helper (int p);
int reverse_helper (int p);
int main ()
{
	int x,n;
	printf("Enter the value of n: ");
	scanf("%d",&n);
	x=n;
	while (!Palindrome_helper (x))
		x++;
	printf("Smallest palindromic number x greater than %d is %d\n",n,x);
	return 0;	
}
 bool Palindrome_helper (int p)
 {
 	if (p==reverse_helper(p))
 		return 1;
 	else 	
 		return 0;	
 }
 int reverse_helper (int p)
 { 
 	int rev=0,dig;
 	while (p!=0)
 	{
 		dig=p%10;
 		rev=rev*10+dig;
 		p=p/10;
 	}
 	return rev;	
 }
