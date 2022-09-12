/*CP-Assignment-3
Author-Kaushal Lodd
Roll No. T090
Question 3*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<termios.h>
#include<unistd.h>

struct library {

	char bn[100];	// Book Name
	long int bno;	// Accession Number 
	char ba[100];	// Book Author 
	float bp;	// Book Price
	int noc;	// Number of Copies 
	_Bool flag;	// Issue Status
}books[100];
int n=0;

void add_info (void);
void display_info (void);
void display_info_book (int);
void books_of_author (void);
void num_of_copies (void);
int getch(void);
int main ()
{
	int choice;
 	system("clear");
	puts("--------------------------------------------------------------------------------");
	puts("                               LIBRARY MENU                                    ");
	puts("--------------------------------------------------------------------------------");
	printf("1. Add Information\n2. Display all books information\n3. List all books of given author\n");
	printf("4. List the count of books currently available in the library of the given title\n5. Exit\n");
	puts("--------------------------------------------------------------------------------");
	printf("Enter Choice: ");
	scanf("%d",&choice);
	switch (choice)
	{
		case 1:	add_info();
			break;
		case 2:	display_info();
			break;
		case 3:	books_of_author();
			break;
		case 4:	num_of_copies();
			break;
		case 5:	exit(0);
		default: printf("Invalid Input\nPlease Try again\n");
			 main();		
	}
	return 0;
}
 void add_info (void)
 {
 	system("clear");
 	int num;
 	size_t len;
 	printf("Enter number of books: ");
 	scanf("%d",&num);
 	for (int i=n;i<n+num;i++)
 	{
 		system("clear");
		puts("--------------------------------------------------------------------------------");
		printf("			       	BOOK %d\n",i+1);
		puts("--------------------------------------------------------------------------------");
		printf("\nName: ");
		fgets(books[i].bn,100,stdin);
		fgets(books[i].bn,100,stdin);
		printf("Accession Number: ");
		scanf("%ld",&books[i].bno);
		printf("Author: ");
		fgets(books[i].ba,100,stdin);
		fgets(books[i].ba,100,stdin);
		printf("Price: ");
		scanf("%f",&books[i].bp);
		printf("Number of Copies: ");
		scanf("%d",&books[i].noc);
		if (books[i].noc>0)
			books[i].flag=1;
		else
			books[i].flag=0;
		len=strlen(books[i].bn);
		if (len && books[i].bn[len-1]=='\n') 
			books[i].bn[len-1]='\0';
		len=strlen(books[i].ba);
		if (len && books[i].ba[len-1]=='\n') 
			books[i].ba[len-1]='\0';			
 	}
 	n=n+num;
	system("clear");
	puts("--------------------------------------------------------------------------------");
	printf("\n                   	DATA ENTERED SUCCESSFULLY!!!\n\n");
	puts("--------------------------------------------------------------------------------");
	printf("Enter any key to continue\n");
	getch();
	getch();
	main();
 }
 void display_info (void)
 {
 	int i;
 	system("clear");
 	if (n==0)
 	{
 		puts("--------------------------------------------------------------------------------");
		printf("\n                   NO BOOKS PRESENT! PLEASE ADD INFORMATION\n\n");
		puts("--------------------------------------------------------------------------------");
		printf("Enter any key to continue\n");
		getch();
		getch();
		main();
 	}
	puts("--------------------------------------------------------------------------------");
	printf("\n");
	for (i=0;i<n;i++)
		printf("%d. %s - %s\n",i+1,books[i].bn,books[i].ba);
	printf("%d. Exit\n\n",i+1);	
	puts("--------------------------------------------------------------------------------");
	int choice;
	printf("Enter Choice: ");
	scanf("%d",&choice);
	if (choice==i+1)
		main();
	display_info_book(choice-1);
 }
 void display_info_book (int i)
 {
 	system("clear");
 	puts("--------------------------------------------------------------------------------");
	printf("\nName: %s\n",books[i].bn);
	printf("Accession Number: %ld\nAuthor: %s\n",books[i].bno,books[i].ba);
	printf("Price: %.2f\n",books[i].bp);
	if (books[i].flag)
		printf("Issue Status: AVAILABLE\n\n");
	else 
		printf("Issue Status: UNAVAILABLE\n\n");	
	puts("--------------------------------------------------------------------------------");
	printf("Enter any key to go back\n");
	getch();
	getch();
	display_info();
 }
 void books_of_author (void)
 {
 	system("clear");
 	if (n==0)
 	{
 		puts("--------------------------------------------------------------------------------");
		printf("\n                   NO BOOKS PRESENT! PLEASE ADD INFORMATION\n\n");
		puts("--------------------------------------------------------------------------------");
		printf("Enter any key to continue\n");
		getch();
		getch();
		main();
 	}
 	char aut[100];int i,k=0,choice;
 	size_t len;
 	system("clear");
	puts("--------------------------------------------------------------------------------");
	printf("\nEnter the name of the Author.\n\n");
	puts("--------------------------------------------------------------------------------");
	printf("Name: ");
	fgets(aut,100,stdin);
	fgets(aut,100,stdin);
	len=strlen(aut);
	if (len && aut[len-1]=='\n') 
		aut[len-1]='\0';
	system("clear");
	puts("--------------------------------------------------------------------------------");
	printf("\n");
	for (i=0;i<n;i++)
		if (!strcmp(aut,books[i].ba))
			printf("%d. %s - %s\n",++k,books[i].bn,books[i].ba);
	if (k==0) {
		printf("		NO BOOKS OF THE ENTERED AUTHOR FOUND!\n\n");
		puts("--------------------------------------------------------------------------------");
		printf("Enter any key to continue.");
		getch();
		main();	
	}		
	printf("\n");
	puts("--------------------------------------------------------------------------------");
	printf("Enter any key to continue.");
	getch();
	main();	
 }
 void num_of_copies (void)
 {
 	system("clear");
 	if (n==0)
 	{
 		puts("--------------------------------------------------------------------------------");
		printf("\n                     NO BOOKS PRESENT! PLEASE ADD INFORMATION\n\n");
		puts("--------------------------------------------------------------------------------");
		printf("Enter any key to continue\n");
		getch();
		getch();
		main();
 	}
 	char name[100];int i;
 	size_t len;
	puts("--------------------------------------------------------------------------------");
	printf("\nEnter the name of the Book.\n\n");
	puts("--------------------------------------------------------------------------------");
	printf("Name: ");
	fgets(name,100,stdin);
	fgets(name,100,stdin);
	len=strlen(name);
	if (len && name[len-1]=='\n') 
		name[len-1]='\0';
	system("clear");	
	for (i=0;i<n;i++)
		if (!strcmp(name,books[i].bn))
			break;
	if (i==n)
	{
		system("clear");
		puts("--------------------------------------------------------------------------------");
		printf("\n                 	    NO BOOK FOUND!!\n\n");
		puts("--------------------------------------------------------------------------------");
		printf("Enter any key to continue\n");
		getch();
		main();
	}
	puts("--------------------------------------------------------------------------------");
	printf("\nNumber of copies of %s by %s currently available are: %d\n\n",books[i].bn,books[i].ba,books[i].noc);
	puts("--------------------------------------------------------------------------------");
	printf("Enter any key to continue\n");
	getch();
	main();		
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
