#include<stdio.h>
int main()
{
	int r,n,num,bin=0,k=1;
	printf("Enter a decimal value no. ");
	scanf("%d",&num);
	n=num;
	while(n>0)
	{
		r=n%2;
		bin=bin+r*k;
		n=n/2;
		k=k*10;	
	}
	printf("The binary of given no, is %d\n",bin);
}
