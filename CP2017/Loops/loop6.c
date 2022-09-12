#include<stdio.h>
int GCD(int a,int b)
{
	while (a!=b)
	{
	        if (a>b)
	                a-=b;
	        else 
	                b-=a;        
	}
	return a;    // or b since a==b
}
int main()
{
        int a, b,gcd;
        printf("Enter two integers\n");
        scanf("%d %d",&a,&b);
        gcd=GCD(a,b);
        printf("gcd(%d,%d) is %d\n",a,b,gcd);
        return 0;
}
