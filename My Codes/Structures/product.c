#include<stdio.h>
#include<stdlib.h>

struct inventory {

	char name[30];
	int prod_num;
	int price;
};

int main ()
{
	int n,i=1;
	printf("Enter number of products: ");
	scanf("%d",&n);
	struct inventory product[n],*ptr;
	for (ptr=product;ptr<product+3;ptr++)
	{
		printf("PRODUCT %d\n",i);
		printf("Name: ");
		fgets(ptr->name,30,stdin);
		fgets(ptr->name,30,stdin);
		printf("Product Number: ");
		scanf("%d",&ptr->prod_num);
		printf("Price: ");
		scanf("%d",&ptr->price);
		i++;
	}
	i=1;
	ptr=product;
	printf("\nProduct Information given:");
	while (ptr<product+3)
	{
		printf("\nPRODUCT %d\n",i);
		printf("Name: %s",ptr->name);
		printf("Product Number: %d\nPrice: %d\n",ptr->prod_num,ptr->price);
		ptr++;i++;
	}
	return 0;
}
