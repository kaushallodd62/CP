#include<stdio.h>
#include<string.h>

int main ()
{
	char name[30],*ptr=name;
	puts("Enter your name:");
	gets(name);	
	//scanf("%[^\n]s",name);
	while (*ptr!='\0')
		ptr++;
	printf("Length: %ld\n",ptr-name);
	printf("Length: %ld\n",strlen(name));	
	return 0;		
}
