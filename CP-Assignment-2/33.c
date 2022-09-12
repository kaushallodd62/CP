/*CP-Assignment-2
Author-Kaushal Lodd
Roll No. T090
Question 33*/

#include<stdio.h>
#include<stdlib.h>

void pig_latin (char str[]);
int main ()
{
	char word[30];
	puts("English Word:");
	gets(word);
	pig_latin(word);
	puts("Pig-Latin Translation:");
	puts(word);
	return 0;
}
 void pig_latin (char str[])
 {
 	int i,len=0;
 	for (i=0;str[i]!='\0';i++)
 		len++;
 	str[len]=str[0];
 	for (i=0;i<len;i++)
 		str[i]=str[i+1];
 	str[len]='a';
 	str[++len]='y';
 	str[++len]='\0';			
 }
