#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char str[100],substr[100];
	int i,j,k,count=0;
	puts("Enter Text:");
	gets(str);
	puts("Enter substring whose count is to be known:");
	gets(substr);
	for (i=0;str[i]!='\0';i++)
	{
		j=0;
		if (str[i]==str[j])
		{
			k=i;
			while (substr[j]!='\0')
			{	
				j++;
				k++;
				if (str[k]==substr[j])
					continue;	
				else 
					break;	
			}
			if (j==strlen(substr))
				count++;
		}
	
	}
	printf("%s occured %d times\n",substr,count);
	return 0;
}
