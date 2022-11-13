#include <windows.h>
#include<stdio.h>
#include<time.h>

void enterchoice(void);





COORD coord = {0, 0};
void gotoxy (int x, int y)
{
        coord.X = x; coord.Y = y;
        SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}




int main()
{
    int count = 0;

    int choice,price;

    while(x!=3)
	{
        a:choice=enterchoice();
		switch(choice)
		{
		    int y;
		    int ch;
			case 1:

			    b: printf(" 1- To edit price of ticket :   \n");

                printf(" 2- To view reserved tickets:   \n");
                printf(" 3- Exit  System:        \n");
	            scanf("%d", &ch);
	            switch(ch){
            case 1:
                price=changepriceticket(price);
                goto b;
				break;
            case 2:
                details();
                goto b;
				break;
            case 3:
                y=3;
                goto a;
                break;
             default:
				printf("Choice not available\n");
				break;
	            }




	/////next ///////


}

//return 0;
}




COORD coord = {0, 0};
void gotoxy (int x, int y)
{
        coord.X = x; coord.Y = y;
        SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
void enterchoice(void)
{
	int choice;
	printf("                 Welcome To Movie Ticket Booking System\n");
	printf(" ************#######************\n");
	printf("             1- Admin           \n");
	printf("             2- User          \n");
	printf("             3- Exit system:                                   \n");
	printf("**********************\n");
	printf("  Enter your choice: ");
	scanf("%d",&choice);
	return choice;
}





int changepriceticket(int price)
{
	char pass[10],pak[10]="fahim";
	printf("Enter the password to change price of ticket: ");
	scanf("%s",&pass);
	if (strcmp(pass,pak)==0)
	{
		printf("Please enter new price: ");
		scanf("%d",&price);
		printf("Price Updated Successfully: ");
		system("PAUSE");
		system("CLS");
	}
	else
		printf("The entered password is wrong! ");
	return price;
}
