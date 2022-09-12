#include<stdio.h>
#include<string.h>

int main ()
{
	static int a[]={0,1,2,3,4};
	int *p[]={a,a+1,a+2,a+3,a+4};
	printf("%p %p %d %p\n",p,*p,*(*p),a);
	return 0;
}

