#include<stdio.h>
int rfibo (int x);
int main()
{
	int i,n;
	printf("Enter the value of n: ");
	scanf("%d",&n);
	printf("First n terms of the Fibonacci Series\n");
	for (i=0;i<n;i++)
	{
		printf("%d\t",rfibo(i));
	}
	printf("\n");
	return 0;
}
  int rfibo (int x)
  {
  	if (x==0)
  		return 0;
  	else if (x==1)
  		return 1;	
  	else 
  		return rfibo(x-1)+rfibo(x-2);
  }
