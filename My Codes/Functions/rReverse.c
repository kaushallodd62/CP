#include<stdio.h>
int reverse (int a);
int main()
{
	int num;
	printf("Enter a number: ");
	scanf("%d",&num);
	printf("Reverse number: %d\n",reverse(num));
	return 0;
}
  int reverse (int a)
  {
  	static int rev=0;
  	int dig;
  	if (a==0)
  		return rev;
  	else 
  	{
  		dig=a%10;
  		rev=rev*10+dig;
  		return reverse(a/10);
  	}	
  	  	
  }
