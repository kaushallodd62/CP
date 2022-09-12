/*CP-Assignment-4
Author - Kaushal Lodd
Roll no. T090
Question 4*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	FILE *fp;
	int line_no=1;
	char fname[128], line[100];
	printf("Enter .txt file name: ");
	scanf("%s", fname);
	fp = fopen(fname, "r");
	if (fp == NULL)
	{
		puts("File not found.");
		exit(1);
	}
	while (fgets(line, 99, fp) != NULL)
	{
		printf("%d. %s",line_no, line);
		line_no++;
	}
	fclose(fp);
	return 0;
}
