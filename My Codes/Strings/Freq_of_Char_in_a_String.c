#include<stdio.h>

int charcount(char str[20],char ch)
{
	int i,count;
	for (i=0;str[i]!='\0';i++)
		{
			if (ch==str[i])
				count++;	
		}
	return count;	
}

int main()
{
	char str[20],ch;
	int count;
	printf("Enter a string(max 20 characters):");
	gets(str);
	printf("Enter the character to be searched:");
	scanf("%c",&ch);
	count=charcount(str,ch);
	printf("The frequency of %c in %s is %d\n",ch,str,count);
	return 0;
}
