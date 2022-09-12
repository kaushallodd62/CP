/*CP-Assignment-2
Author-Kaushal Lodd
Roll No. T090
Question 31*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

char first_unique_char (char str[]);
int main ()
{
	char ch,str[30];
	puts("Enter String:");
	gets(str);
	ch=first_unique_char(str);
	printf("%c\n",ch);
	return 0;
}
 char first_unique_char (char str[])
 {
 	int i,j,flag;
 	for (i=0;str[i]!='\0';i++)
 	{
 		flag=1;
 		for (j=0;str[j]!='\0';j++)
 		{	
			if (i==j)
				continue;
			if (tolower(str[i])==tolower(str[j]))
 			{	
 				flag=0;
				break;
			}
		}	
 		if (flag==1)
 			return str[i];		
 	}			
 }
