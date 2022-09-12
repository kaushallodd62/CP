#include<stdio.h>

int main ()
{
	int num1=5,num2=15,*p1,*p2;
	p1=&num1;p2=&num2;
	printf("%d %d %p %p\n",num1,num2,p1,p2);
	*p1=10;
	*p2=*p1;
	printf("%d %d %p %p\n",num1,num2,p1,p2);
	p2=p1;
	printf("%d %d %p %p\n",num1,num2,p1,p2);
	*p2=20;
	printf("%d %d %p %p\n",num1,num2,p1,p2);
	*p1=60;
	printf("%d %d %p %p\n",num1,num2,p1,p2);
	return 0;
}
