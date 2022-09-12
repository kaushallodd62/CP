/*CP-Assignment-2
Author-Kaushal Lodd
Roll No. T090
Question 34*/

#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

int main ()
{
	char str[100],initials[10];
	int i,j=0;
	puts("Enter Word:");
	gets(str);
	initials[j]=toupper(str[0]);
	initials[++j]='.';
	for (i=1;str[i]!='\0';i++)
	{
		if (str[i-1]==' ' && str[i]!=' ')
		{
			initials[++j]=toupper(str[i]);
			initials[++j]='.';
		}
	}
	initials[++j]='\0';
	puts("Initials of the string is:");
	puts(initials);
	return 0;
}
