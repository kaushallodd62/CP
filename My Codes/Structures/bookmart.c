//BOOKMART MENU DRIVEN PROGRAM
//Author: Kaushal Lodd

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include <termios.h>
#include <unistd.h>

struct books {

	char bn[100];	// Book Name
	char bno[100];	// Book Number 
	char ba[30];	// Book Author 
	float bp;	// Book Price
	int noc;	// Number of Copies 
}book[5];
_Bool flag=1;

void input (struct books book[]);
int menu_screen (void);
void availability_screen (void);
void purchase_screen (void);
int getch(void);
int main ()
{
	if (flag==1)
	{
		input(book);
		flag=0;
	}	
	int choice;
	choice=menu_screen();
	switch (choice)
	{
		case 1:	availability_screen();
				break;
		case 2:	purchase_screen();
				break;
		case 3:	exit(0);
		default: printf("Invalid Input\nPlease Try again\n");
				 main();		
	}
	return 0;
}
 void input (struct books book[])
 {
 	strcpy(book[0].bn,"The Alchemist");
 	strcpy(book[0].bno,"978-81-7223-498-0");
 	strcpy(book[0].ba,"Paulo Coelho");
 	book[0].bp=299.00;
 	book[0].noc=23;
 	strcpy(book[1].bn,"Decpetion Point");
 	strcpy(book[1].bno,"0-552-15176-9");
 	strcpy(book[1].ba,"Dan Brown");
 	book[1].bp=499.00;
 	book[1].noc=15;
 	strcpy(book[2].bn,"The Murder of Roger Ackroyd");
 	strcpy(book[2].bno,"978-0007282548");
 	strcpy(book[2].ba,"Agatha Christie");
 	book[2].bp=299.00;
 	book[2].noc=34;
 	strcpy(book[3].bn,"Jaya");
 	strcpy(book[3].bno,"978-0-143-10425-4");
 	strcpy(book[3].ba,"Devdutt Pattanaik");
 	book[3].bp=499.00;
 	book[3].noc=4;
 	strcpy(book[4].bn,"The Lost Symbol");
 	strcpy(book[4].bno,"978-0-552-14952-5");
 	strcpy(book[4].ba,"Dan Brown");
 	book[4].bp=599.00;
 	book[4].noc=9;
 }
 int menu_screen (void)
 {
	int choice;
 	system("clear");
	puts("--------------------------------------------------------------------------------");
	puts("                               BOOKMART MENU                                    ");
	puts("--------------------------------------------------------------------------------");
	printf("1.Availability\n2.Purchase\n3.Exit\n");
	puts("--------------------------------------------------------------------------------");
	printf("Enter Choice: ");
	scanf("%d",&choice);
	return choice;
 }
 void availability_screen (void)
 {
 	system("clear");
	puts("--------------------------------------------------------------------------------");
	printf("\n1.The Alchemist - Paulo Coelho\n2.Deception Point - Dan Brown\n3.The Murder of Roger Ackroyd - Agatha Christie\n");
	printf("4.Jaya - Devdutt Pattanaik\n5.The Lost Symbol - Dan Brown\n\n6.Back\n\n");
	puts("--------------------------------------------------------------------------------");
	int choice;
	printf("Enter Choice: ");
	scanf("%d",&choice);
	switch (choice)
	{
		case 1:	{
					system("clear");
					puts("--------------------------------------------------------------------------------");
					printf("\nName: %s\nISBN: %s\nAuthor: %s\nPrice: %.2f\nNumber of copies: %d\n",book[0].bn,book[0].bno,book[0].ba,book[0].bp,book[0].noc);
					printf("\nEnter any key to go back.\n\n");
					puts("--------------------------------------------------------------------------------");
					getch();
					getch();
					availability_screen();					
			}
		case 2:	{
					system("clear");
					puts("--------------------------------------------------------------------------------");
					printf("\nName: %s\nISBN: %s\nAuthor: %s\nPrice: %.2f\nNumber of copies: %d\n",book[1].bn,book[1].bno,book[1].ba,book[1].bp,book[1].noc);
					printf("\nEnter any key to go back.\n\n");
					puts("--------------------------------------------------------------------------------");
					getch();
					getch();
					availability_screen();					
			}
		case 3:	{
					system("clear");
					puts("--------------------------------------------------------------------------------");
					printf("\nName: %s\nISBN: %s\nAuthor: %s\nPrice: %.2f\nNumber of copies: %d\n",book[2].bn,book[2].bno,book[2].ba,book[2].bp,book[2].noc);
					printf("\nEnter any key to go back.\n\n");
					puts("--------------------------------------------------------------------------------");
					getch();
					getch();
					availability_screen();					
			}
		case 4:	{
					system("clear");
					puts("--------------------------------------------------------------------------------");
					printf("\nName: %s\nISBN: %s\nAuthor: %s\nPrice: %.2f\nNumber of copies: %d\n",book[3].bn,book[3].bno,book[3].ba,book[3].bp,book[3].noc);
					printf("\nEnter any key to go back.\n\n");
					puts("--------------------------------------------------------------------------------");
					getch();
					getch();
					availability_screen();					
			}
		case 5:	{
					system("clear");
					puts("--------------------------------------------------------------------------------");
					printf("\nName: %s\nISBN: %s\nAuthor: %s\nPrice: %.2f\nNumber of copies: %d\n",book[4].bn,book[4].bno,book[4].ba,book[4].bp,book[4].noc);
					printf("\nEnter any key to go back.\n\n");
					puts("--------------------------------------------------------------------------------");
					getch();
					getch();
					availability_screen();					
			}
		case 6:	main();
			break;
		default:printf("Invalid Input\nPlease Try again. Enter any key to continue'n");
			getch();
			getch();
			main();							
	}
 }
 void purchase_screen (void)
 {
 	char isbn[100],ch;
 	int i;
 	system("clear");
	puts("--------------------------------------------------------------------------------");
	printf("\n1.Enter the ISBN of the book you want to purchase.\n\n");
	puts("--------------------------------------------------------------------------------");
	printf("ISBN: ");
	scanf("%s",isbn);
	for (i=0;i<5;i++)
		if (!strcmp(isbn,book[i].bno))
			break;
	system("clear");
	puts("--------------------------------------------------------------------------------");
	if (i==5)
		printf("\nBook not found! Please Try again.\nEnter any key to continue.\n\n");
	else if (book[i].noc==0) 
		printf("\nOUT OF STOCK! Please come back later!\nEnter any key to continue.\n\n");
	else 
		printf("\nAre you sure you want to purchase %s by %s (Y/N)\n\n",book[i].bn,book[i].ba);	
	puts("--------------------------------------------------------------------------------");	
	if (i==5 || book[i].noc==0)
	{
		getch();
		getch();
		main();
	}	
	else 	
	{
		printf("Enter Choice: ");
		scanf("%c",&ch);
		scanf("%c",&ch);
		if (ch=='Y' || ch=='y')
		{
			system("clear");
			puts("--------------------------------------------------------------------------------");
			printf("\n                   CONGRAULATION ON YOUR PURCHASE!!!!\n\n");
			puts("--------------------------------------------------------------------------------");
			book[i].noc--;
			printf("Enter any key to continue");
			getch();
			getch();
			main();
		}
		else if (ch=='N' || ch=='n')
			main();
		else 
		{
			system("clear");
			puts("--------------------------------------------------------------------------------");
			printf("\n                   INVALID ENRTY!\n\n");
			puts("--------------------------------------------------------------------------------");
			printf("Enter any key to continue");
			getch();
			getch();
			main();
		}	
	}
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
