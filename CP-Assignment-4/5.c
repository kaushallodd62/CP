/*CP-Assignment-4
Author - Kaushal Lodd
Roll no. T090
Question 5*/

#include <stdio.h>
#include <stdlib.h>
#define AND &&
#define OR ||

int main(int argc, char const *argv[])
{
	FILE *fp;
	char fname[128], ch;
	int low_count = 0, upp_count = 0, num_count = 0, spec_count = 0;
	printf("Enter .txt file name: ");
	scanf("%s", fname);
	fp = fopen(fname, "r");
	if (fp == NULL)
	{
		puts("File not found.");
		exit(1);
	}
	while ((ch=fgetc(fp)) != EOF)
	{
		if (ch >= 'a' AND ch <= 'z')
			low_count++;
		else if (ch >= 'A' AND ch <= 'Z')
			upp_count++;
		else if (ch >= '0' AND ch <= '9')
			num_count++;
		else 
			spec_count++;
	}
	printf("Lower case count: %d\nUpper case count: %d\nNumber count: %d\nSpecial character count: %d\n", \
		low_count, upp_count, num_count, spec_count);
	return 0;
}
