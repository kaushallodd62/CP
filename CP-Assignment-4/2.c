/*CP-Assignment-4
Author - Kaushal Lodd
Roll no. T090
Question 2*/

#include <stdio.h>
#include<stdlib.h>
#include <termios.h>
#include <unistd.h>

int getch(void);
int main(int argc, char const *argv[])
{
	FILE *fo, *fe;
	int num = 1, choice;
	fo = fopen("odd.txt", "r+");
	if (fo == NULL)
	{
		fopen("odd.txt", "w+");
		if (fo == NULL)
		{
			puts("Unable to open odd file.");
			exit(1);
		}
	}
	fe = fopen("even.txt", "r+");
	if (fe == NULL)
	{
		fopen("even.txt", "w+");
		if (fe == NULL)
		{
			puts("Unable to open even file.");
			exit(1);
		}
	}
	while (1)
	{
		system("clear");
		printf("1. Enter integers.\n2. Read even file.\n3. Read odd file.\n4. Exit\n");
		printf("Enter choice: ");
		scanf("%d",&choice);
		switch (choice)
		{
			case 1:
				system("clear");
				fseek(fe, 0, SEEK_END);
				fseek(fo, 0, SEEK_END);
				printf("Please Enter integers.\nEnter 0 to stop.\n");
				while (1)
				{
					scanf("%d",&num);
					if (num == 0)
						break;
					if (num%2 == 0)
						fprintf(fe, "%d\n", num);
					else
						fprintf(fo, "%d\n", num);
				}
				printf("\nDATA STORED SUCCESSFULLY.\n");
				printf("Enter any key to continue.\n");
				fflush(stdin);
				getch();
				break;
			case 2:
				system("clear");
				rewind(fe);
				while (fscanf(fe, "%d\n", &num) != EOF)
					printf("%d\n", num);
				printf("Enter any key to continue.\n");
				fflush(stdin);
				getch();
				break;
			case 3:
				system("clear");
				rewind(fo);
				while (fscanf(fo, "%d\n", &num) != EOF)
					printf("%d\n", num);
				printf("Enter any key to continue.\n");
				fflush(stdin);
				getch();
				break;
			case 4:
				fclose(fe);
				fclose(fo);
				exit(0);
		}
		
	}
	return 0;
}
int getch(void)
 {
   	struct termios oldattr, newattr;
    	int ch;
    	tcgetattr( STDIN_FILENO, &oldattr );
    	newattr = oldattr;
    	newattr.c_lflag &= ~( ICANON | ECHO );
    	tcsetattr( STDIN_FILENO, TCSANOW, &newattr );
    	ch = getchar();
    	tcsetattr( STDIN_FILENO, TCSANOW, &oldattr );
    	return ch;
 }
