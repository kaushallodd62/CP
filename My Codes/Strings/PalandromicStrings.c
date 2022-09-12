#include<stdio.h>
#include<string.h>
int main()
{
	int i,j,l,flag=1;
	char str[100];
	printf("Enter a string:\n");
	gets(str);
	l=strlen(str);
	for (i=0,j=l-1;i<=j;i++,j--)
		if (str[i]!=str[j])
		{
			flag=0;
			break;
		}
	if (flag==1)
		printf("String is Palandromic\n");
	else 
		printf("String is NOT Palandromic\n");	
	return 0;	
}
