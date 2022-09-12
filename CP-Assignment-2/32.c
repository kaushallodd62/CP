/*CP-Assignment-2
Author-Kaushal Lodd
Roll No. T090
Question 32*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 100

int strend (char s[], char t[]);
int main ()
{
	char str[MAX],substr[MAX];
	puts("Enter String:");
	gets(str);
	puts("Enter Sub-string:");
	gets(substr);
	printf("%d\n",strend(str,substr));
	return 0;
}	
 int strend (char s[], char t[])
 {			
 	int i,j;
 	for (i=strlen(s)-1,j=strlen(t)-1;j>=0;i--,j--)
 		if (s[i]!=t[j])
 			return 0; 
	 return 1;
 }	 			
