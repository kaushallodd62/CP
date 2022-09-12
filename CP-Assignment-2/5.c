/*CP-Assignment-2
Author-Kaushal Lodd
Roll No. T090
Question 5*/

#include<stdio.h>
#include<stdbool.h>

bool checkPerfect (int n);
int main ()
{
	int n;
	printf("Enter the value of n: ");
	scanf("%d",&n);
	printf("%d\n",checkPerfect(n));
	return 0;
}
 bool checkPerfect (int n)
 {
 	int i,sum=0;
 	for (i=1;i<n;i++)
 		if (n%i==0)
 			sum+=i;
 	if (sum==n)
 		return true;
 	else 
 		return false;	
 }
