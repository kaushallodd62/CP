#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <termios.h>
#include <unistd.h>
//#include <conio.h>

typedef char *string ;
struct dish
{
    string name;
    int code;
    float price;
};
struct menu
{
    string category;
    struct dish types[5];
};
struct rec
{
      struct dish order;
      int quantity;
      float netprice;
};
struct menu tandoor = {
    "Tandoori Starter",
    {
        {"Tandoori Aloo",101,80},
        {"Paneer Tandoori",102,100},
        {"Chicken Tandoori",103,140},
        {"Motton Tandoori",104,160},
        {"Special Tandoori",105,180},
    },
};
struct menu burger = {
    "Happy Burgers",
    {
        {"Veggie Burger",201,60},
        {"Cheese Burger",202,60},
        {"Schezwan Burger",203,80},
        {"Paneer Burger",204,100},
        {"Chicken Burger",205,120},
    },
};
struct menu pizza = {
    "Pizza World",
    {
        {"Margarita Cheese Pizza",301,90},
        {"Italian Mushroom Pizza",302,100},
        {"Cheeze Burst Pizza",303,100},
        {"Paneer Tikka Pizza",304,120},
        {"Mexican Chicken Pizza",305,180},
    },
};
struct menu sand = {
    "Sandwich Time",
    {
        {"Veg. Grilled Sandwich",401,30},
        {"Italian Cheese Sandwich",402,50},
        {"Schezwan Sandwich",403,50},
        {"Paneer Sandwich   ",404,70},
        {"Chicken Sandwich   ",405,100},
    },
};
void checkuser();
void menu();
void showmenu(struct menu *lcat, struct menu *rcat);
void takeorder(struct rec receipt[], float *total, int *i);
void revieworder(struct rec receipt[], float *total, int *orders);
void printreceipt(struct rec receipt[], float *total, int *orders);
void Exit();
void bye();
char getch(void);
int main()                                                                          //HERE IS MAIN FUNTION
{
    float total = 0;
    struct rec receipt[15];
    int no_of_orders= 0;
    system("clear");
    checkuser();
    menu();
    takeorder(receipt,&total,&no_of_orders);
    printreceipt(receipt,&total,&no_of_orders);
    bye();
}
void checkuser()
{
    char user[20], pass[15], ch; int i = 0;
    printf("\033[3;40H%c[4mLOS POLLOS LOGIN\n%c[0m",27,27);
    printf(
    "\033[4;38H╔═════════════════════════╗"
    "\033[5;38H║                         ║"
    "\033[6;38H║                         ║"
    "\033[7;38H╚═════════════════════════╝"
        );
    printf("\033[5;40HUSERNAME : ");
    fgets(user, 20, stdin);
    printf("\033[6;40HPASSWORD : ");
    while (/*(ch = getch())!=13 ||*/ (ch = getch())!='\n')
    {
            pass[i] = ch;
            printf("*");
            i++;
    }
    if (strcmp(pass,"Bluestuff")!=0)
    {
        puts("\n\033[31m ERROR!!!");
        puts("\033[31m Try Again.");
        puts("\033[0m");
        exit (1);
    }
    system("clear");
    printf("\033[5;33H%c[4mLOS POLLOS HERMANOS\n%c[0m",27,27);
    printf("\033[6;34H%c[4mWelcome %s\n%c[0m",27,user,27);
}
void menu()
{
    int ch;
    do{
    printf(
    "╔═════════════════════════════════════════════════════════════════════════════════════════╗\n"
    "║                                      MENU                                               ║\n"
    "╚═════════════════════════════════════════════════════════════════════════════════════════╝\n"
      );
    showmenu(&tandoor, &pizza);
    showmenu(&burger, &sand);
    printf("\n\nTo see the menu again press - 01\n"
               "To place your order press   - 02\n"
               "To exit the program press any other key\n"
    );
    printf("Your Choice: ");
    scanf(" %d",&ch);
    if (ch!=2 && ch!=1)
        Exit();
    }while(ch!=2);
    return;

}
void showmenu(struct menu *lcat, struct menu *rcat)
{
    printf("\nItemCode   Name\t\t\tPrice");
    printf("\tItemCode   Name\t\t\t\tPrice\n");
    printf("\n\t%c[3m%s%c[0m",27,lcat->category,27);
    printf("\t\t\t\t%c[3m%s%c[0m\n",27,rcat->category,27);
    for (int i=0; i<5; i++)
    {
        printf("\n %d   %s\t\t%.2f",lcat->types[i].code, lcat->types[i].name, lcat->types[i].price);
        printf("\t %d   %s\t\t%.2f\n",rcat->types[i].code, rcat->types[i].name, rcat->types[i].price);
    }
    return;
}
void takeorder(struct rec receipt[], float *total, int *i)
{
    int code,quan;
    printf(
    "╔═════════════════════════════════════════════════════════════════════════════════════════╗\n"
    "║                                         ORDER                                           ║\n"
    "╚═════════════════════════════════════════════════════════════════════════════════════════╝\n"
      );
    printf("Enter the Item code, You want to Order.\n");
    printf("Enter '0' when done.\n\n");
    while(1)
    {
        printf("Item Code : ");
        scanf("%d",&code);
        if(!((code>100 &&code<106) || (code>200 &&code<206) || (code>300 &&code<306) || (code>400 &&code<406) || (code==0)))
        {
            printf("\033[31m Invalid Code. Try Again\n");
            puts("\033[0m");
            continue;
        }
        if (code==0) break;
        printf("Quantity : ");
        scanf("%d",&quan);

        if(code/100 == 1){
            receipt[*i].order = tandoor.types[(code%10)-1] ;
            receipt[*i].quantity = quan;
            receipt[*i].netprice = (float)quan*tandoor.types[(code%10)-1].price ;
            *total += receipt[*i].netprice ;
            printf("You ordered %d %s\n",quan,tandoor.types[(code%10)-1].name);
        }
        else if(code/100 == 2){
            receipt[*i].order = burger.types[(code%10)-1] ;
            receipt[*i].quantity = quan;
            receipt[*i].netprice = (float)quan*burger.types[(code%10)-1].price ;
            *total += receipt[*i].netprice ;
            printf("You ordered %d %s\n",quan,burger.types[(code%10)-1].name);
        }
        else if(code/100 == 3){
            receipt[*i].order = pizza.types[(code%10)-1] ;
            receipt[*i].quantity = quan;
            receipt[*i].netprice = (float)quan*pizza.types[(code%10)-1].price ;
            *total += receipt[*i].netprice ;
            printf("You ordered %d %s\n",quan,pizza.types[(code%10)-1].name);
        }
        else if(code/100 == 4){
            receipt[*i].order = sand.types[(code%10)-1] ;
            receipt[*i].quantity = quan;
            receipt[*i].netprice = (float)quan*sand.types[(code%10)-1].price ;
            *total += receipt[*i].netprice ;
            printf("You ordered %d %s\n",quan,sand.types[(code%10)-1].name);
        }
        printf("Cost = %d x %.2f = %.2f\nYour subtotal is %.2f\n\n",quan,receipt[*i].order.price,receipt[*i].netprice,*total);
        (*i)++;

    }
    printf("\n\nTo review or change your order press - 01\n"
               "To proceed to checkout press         - 02\n"
               "To exit the program press any other key\n"
    );
    int ch;
    printf("Your Choice: ");
    scanf("%d",&ch);
    if (ch==1) revieworder(receipt,total,i);
    else if (ch==2) return;
    else
    {
        Exit();
        revieworder(receipt,total,i);
    }
}
void revieworder(struct rec receipt[], float *total, int *orders)
{
    system("clear");
    printf(
    "╔═════════════════════════════════════════════════════════════════════════════════════════╗\n"
    "║                                   REVIEW ORDER                                          ║\n"
    "╚═════════════════════════════════════════════════════════════════════════════════════════╝\n"
      );
    if (*orders ==0 )
        printf("You Haven't Ordered Anything !!");
    printf("\n Sr.No.\t\tName\t\t\t\t\tTotal\n\n");
    for (int i=0; i<(*orders);i++)
    {
        printf(" %d.  %d  %s\n",i+1, (receipt+i)->order.code, (receipt+i)->order.name);
        printf("  \t(Price) %.2f\tX\t(Qty.) %d\t=\t%.2f\n\n", (receipt+i)->order.price, (receipt+i)->quantity, (receipt+i)->netprice);
    }
    printf("═══════════════════════════════════════════════════════════════════════════════════════════\n");
    printf("\t\t\t\t\t\t\tNet Total = %c[4m %.2f %c[0m",27,*total,27);
    printf("\n\nTo add items to your order press     - 01\n"
               "To remove items from your order press- 02\n"
               "To proceed to checkout press any other key\n"
    );
    int ch,sn;
    printf("Your Choice: ");
    scanf("%d",&ch);
    if (ch==1)
    {
        showmenu(&tandoor, &pizza);
        showmenu(&burger, &sand);
        takeorder(receipt,total,orders);
    }
    else if (ch==2)
    {
        printf("Enter the serial No. of the you want to remove : ");
        scanf("%d",&sn);
        if(sn>*orders || sn<1) printf("Item Not Found\n");
        else
        {
            *total -= receipt[sn-1].netprice ;
            for(int i=(sn-1); i<(*orders)-1; i++)
                receipt[i]=receipt[i+1];
            (*orders)--;
            printf("Your Order now is \n\n");
            revieworder(receipt,total,orders);
        }
    }
    else printreceipt(receipt,total,orders);

}
void printreceipt(struct rec receipt[], float *total, int *orders)
{
    system("clear");
    printf(
    "╔═════════════════════════════════════════════════════════════════════════════════════════╗\n"
    "║                                        RECEIPT                                          ║\n"
    "╚═════════════════════════════════════════════════════════════════════════════════════════╝\n"
      );
     if (*orders ==0 ){
        printf("You Haven't Ordered Anything !!");bye();}
    printf("\n Sr.No.\t\tName\t\t\t\t\tTotal\n\n");
    for (int i=0; i<(*orders);i++)
    {
        printf(" %d.  %d  %s\n",i+1, (receipt+i)->order.code, (receipt+i)->order.name);
        printf("  \t(Price) %.2f\tX\t(Qty.) %d\t=\t%.2f\n\n", (receipt+i)->order.price, (receipt+i)->quantity, (receipt+i)->netprice);
    }
    printf("═══════════════════════════════════════════════════════════════════════════════════════════\n");
    printf("\t\t\t\t\t\t\tNet Total = %c[4m %.2f %c[0m\n",27,*total,27);
    printf("\t\t\t\t\t\t\t+GST (18%%) = %.2f\n",0.18*(*total));
    printf("\t\t\t\t\t\t\tNet Total = %c[4m %.2f %c[0m\n\n",27,(*total)*1.18,27);
    return;
}
void Exit()
{
    int ch;
    system("clear");
    printf(
    "\033[4;38H╔═════════════════════════════════════════╗"
    "\033[5;38H║       Are you sure want to Exit ?       ║"
    "\033[6;38H║ (Press '0' for yes)  (Press '1' for no) ║"
    "\033[7;38H║                                         ║"
    "\033[8;38H╚═════════════════════════════════════════╝"
        );
    printf("\033[7;40H  Your Choice : ");
    scanf(" %d",&ch);
    if(ch !=0)
    {
        system("clear");
        return;
    }
    else
        bye();
}
void bye()
{
    printf("\n"
    "╔═════════════════════════════════════════════════════════════════════════════════════════╗\n"
    "║                                  THANK YOU :-)                                          ║\n"
    "║                                 VISIT AGAIN !!!                                         ║\n"
    "╚═════════════════════════════════════════════════════════════════════════════════════════╝\n"
      );
     exit(0);
}
char getch(void)
{
   	struct termios oldattr, newattr;
    	char ch;
    	tcgetattr( STDIN_FILENO, &oldattr );
    	newattr = oldattr;
    	newattr.c_lflag &= ~( ICANON | ECHO );
    	tcsetattr( STDIN_FILENO, TCSANOW, &newattr );
    	ch = getchar();
    	tcsetattr( STDIN_FILENO, TCSANOW, &oldattr );
    	return ch;
}
