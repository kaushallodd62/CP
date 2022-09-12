#include<stdio.h>
int main()
{
	int i=0,n=0;
	char str[100],newstr[100];
	printf("Enter text:\n");
	gets (str);
	while (str[i]!='\0')
	{
		if (!(str[i]==' ' && str[i+1]!=' '))
		{
			newstr[n]=str[i];
			n++;
		}
		i++;
	}
	puts ("Text after removing blank");
	puts (newstr);	
	return 0;		
}
