/*CP-Assignment-4
Author - Kaushal Lodd
Roll no. T090
Question 1*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define OR ||

int main(int argc, char const *argv[])
{
	FILE *fp;
	char fname[128], ch;
	int found = 0;
	printf("Enter .txt file name: ");
	scanf("%127s", fname);
	fp = fopen(fname, "r");
	if (fp == NULL)
	{
		puts("File not found.");
		exit(1);
	}
	while ((ch=fgetc(fp)) != EOF)
		if (ch == 'a' OR ch == 'e' OR ch == 'i' OR ch == 'o' OR ch == 'u')
			found = 1;
	if (found)
		printf("YES\n");
	else
		printf("NO\n");
	fclose(fp);
	return 0;
}
