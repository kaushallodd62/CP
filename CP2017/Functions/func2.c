#include<stdio.h>

int ascii (char ch);
int main ()
{
	char ch;
	printf("Enter a character: ");
	scanf("%c",&ch);
	printf("ASCII value: %d\n",ascii(ch));
	return 0;
}
 int ascii (char ch)
 {
	int a;
	a=(int)ch;
	return a;
 }
