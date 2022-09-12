/*CP-Assignment-2
Author-Kaushal Lodd
Roll No. T090
Question 1*/

#include<stdio.h>

long int nCr_helper(int n,int r);
int main()
{
	int n,r;
	long int nCr;
	printf("Enter the value of n and r to find C(n,r): ");
	scanf("%d %d",&n,&r);
	nCr=nCr_helper(n,r);
	printf("C(%d,%d)= %ld\n",n,r,nCr);
	return 0;
}
 long int nCr_helper(int n,int r)
 {
 	if (n==r)
 		return 1;
 	else if (r==1)
		return n;
 	else 
 		return nCr_helper(n-1,r)+nCr_helper(n-1,r-1);		
 }
