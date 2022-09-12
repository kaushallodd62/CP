/*CP-Assignment-4
Author - Kaushal Lodd
Roll no. T090
Question 9*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, char const *argv[])
{
	FILE *fp;
	int num, sum=0;
	fp = fopen("file.txt", "wb");
	if (fp == NULL)
	{
		puts("Cannot create file.");
		exit(1);
	}
	printf("Enter integers. [Enter -1 to exit]\n");
	while (1)
	{
		if (scanf("%d",&num) != 1)
		{
			printf("Please enter an integer only.\n");
			fflush(stdin);
			continue;
		}
		if (num == -1)
			break;
		fprintf(fp, "%d\n", num);
		sum += num;
	}
	fclose(fp);
	fp = fopen("file.txt", "a");
	fprintf(fp, "%d\n", sum);
	fclose(fp);
	printf("Sum has been appended successfuly. See file for sum.\n");
	return 0;
}
