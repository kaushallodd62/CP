#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	int i,j=0,len;
	char str[100];
	puts("Enter a text:");
	gets(str);
	len=strlen(str);
	for (i=0;str[i]!='\0';i++)
		j++;
	printf("%d %d %d\n",i,j,len);
	return 0;	
}
