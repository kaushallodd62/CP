/*CP-Assignment-3
Author-Kaushal Lodd
Roll No. T090
Question 9*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<termios.h>
#include<unistd.h>

struct polynomial {

	int degree;	
	float arr[15];
};

void input_poly (struct polynomial *);
void input_two_poly (struct polynomial *, struct polynomial *);
void print_poly (struct polynomial *);
void add_poly (struct polynomial *, struct polynomial *);
void evaluate_poly (struct polynomial *, float);
int getch(void);
int main ()
{
	int choice;float x;
	struct polynomial P,Q,R,S;
 	system("clear");
	puts("--------------------------------------------------------------------------------");
	puts("                             POLYNOMIAL MENU");
	puts("--------------------------------------------------------------------------------");
	printf("1. Read and Display\n2. Add two Polynomials\n3. Evaluate Polynomial using Horner’s rule:\n4. Exit\n");
	puts("--------------------------------------------------------------------------------");
	printf("Enter Choice: ");
	scanf("%d",&choice);
	switch (choice)
	{
		case 1:	input_poly(&P);
			print_poly(&P);
			break;
		case 2: input_two_poly (&Q,&R);
			add_poly(&Q,&R);
			break;	
		case 3: input_poly(&S);
			printf("Enter the value of x: ");
			scanf("%f",&x);
			evaluate_poly(&S,x);
			break;
		case 4:	exit(0);	
	}
}
 void input_poly (struct polynomial *ptr)
 {
 	system("clear");
 	printf("Enter the Degree of the Polynomial: ");
 	scanf("%d",&ptr->degree);
 	puts("Enter the co-efficients of the Polynomial");
 	for (int i=0;i<=ptr->degree;i++) 
 		scanf("%f",&ptr->arr[i]);		
 }
 void print_poly (struct polynomial *ptr)
 {
 	printf("\nPolynomial:\n");
 	for (int i=0;i<=ptr->degree;i++) {
 		if (ptr->arr[i]!=0 && i!=ptr->degree)
 			printf("%.2f x^%d + ",ptr->arr[i],ptr->degree-i);
 		if (i==ptr->degree)
 			printf("%.2f",ptr->arr[i]);	
 	}
 	printf("\n\nEnter any key to continue\n");
	getch();
	getch();
	main();
 }
 void input_two_poly (struct polynomial *ptr1, struct polynomial *ptr2)
 {
 	system("clear");
 	puts("--------------------------------------------------------------------------------");
	puts("                             POLYNOMIAL 1");
	puts("--------------------------------------------------------------------------------");
	printf("Enter the Degree of the Polynomial: ");
 	scanf("%d",&ptr1->degree);
 	puts("Enter the co-efficients of the Polynomial");
 	for (int i=0;i<=ptr1->degree;i++) 
 		scanf("%f",&ptr1->arr[i]);
 	system("clear");
 	puts("--------------------------------------------------------------------------------");
	puts("                             POLYNOMIAL 2");
	puts("--------------------------------------------------------------------------------");
	printf("Enter the Degree of the Polynomial: ");
 	scanf("%d",&ptr2->degree);
 	puts("Enter the co-efficients of the Polynomial");
 	for (int i=0;i<=ptr2->degree;i++) 
 		scanf("%f",&ptr2->arr[i]);
 	system("clear");	
 }
 void add_poly (struct polynomial *ptr1, struct polynomial *ptr2)
 {
 	struct polynomial add;
 	int d1=ptr1->degree,d2=ptr2->degree,i=0,j=0,k=0;
 	add.degree=(d1>d2?d1:d2);
 	while (i<=ptr1->degree && j<=ptr2->degree)
 	{
 		if (d1==d2) {
 			add.arr[k]=ptr1->arr[i]+ptr2->arr[j];
 			i++;j++;k++;d1--;d2--;
 		}		
 		else if (d1>d2) {
 			add.arr[k]=ptr1->arr[i];
 			i++;k++;d1--;
 		}
 		else {
 			add.arr[k]=ptr2->arr[j];
 			j++;k++;d2--;
 		}
 	}
 	print_poly(&add);
 }
 void evaluate_poly (struct polynomial *ptr, float x)
 {
 	float result=ptr->arr[0];
 	for (int i=1;i<=ptr->degree;i++)
 		result=result*x+ptr->arr[i];
 	printf("\nResult: %.3f\n",result);
 	printf("Enter any key to continue\n");
	getch();
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
