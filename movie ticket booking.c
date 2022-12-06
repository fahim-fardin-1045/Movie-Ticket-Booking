#include<stdio.h>

#include<stdlib.h>

#include<string.h>

#include<conio.h>

#include<windows.h>

#include <time.h>




struct book

{

    char name[25];

    char date[20];

    int r1,r2,r3,balcony;

} b;

struct login
{
    char fname[120];
    char lname[60];
    char username[30];
    char password[20];
};



void menu();

void Admin();

void User();

void rgister();

void login();

void user_login();

void Book_Ticket();

void View_Movie();

void Add_Movie();

void Delete_Movie();

void Old_Transactions();

void Delete_Transactions();


COORD coord = {0, 0}; // sets coordinates to 0,0

void gotoxy (int x, int y)
{
    coord.X = x;

    coord.Y = y; // X and Y coordinates

    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}




int main()
{





    system("COLOR B0");
    system("cls");

    int ch;

    for(int i=0; i<3; i++)
    {
        for(int j=0; j<111; j++)
            printf("\xB2");
        printf("\n");
    }

    gotoxy(0,22);

    for(int i=0; i<3; i++)
    {
        for(int j=0; j<111; j++)
            printf("\xB2");
        printf("\n");
    }

    printf("\n\n\n\n");

    gotoxy(25,6);

    printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 MOVIE TICKET BOOKING SYSTEM");

    printf(" \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n");



    int ar=300;
    for(int i=3; i<22; i++)
    {
        for(int j=0; j<111; j++)
        {
            if(i==11 && j==48)
            {
                printf("W");

                Sleep(ar);
                continue;
            }

            if(i==11 && j==50)
            {
                printf("E");

                Sleep(ar);
                continue;
            }
            if(i==11 && j==52)
            {
                printf("L");

                Sleep(ar);
                continue;
            }
            if(i==11 && j==54)
            {
                printf("C");

                Sleep(ar);
                continue;
            }
            if(i==11 && j==56)
            {
                printf("O");

                Sleep(ar);
                continue;
            }
            if(i==11 && j==58)
            {
                printf("M");

                Sleep(ar);
                continue;
            }
            if(i==11 && j==60)
            {
                printf("E");

                Sleep(ar);
                continue;
            }
            if(i==12 && j==43)
            {
                printf("I");

                Sleep(ar);
                continue;
            }
            if(i==12 && j==45)
            {
                printf("N");

                Sleep(ar);
                continue;
            }
            if(i==12 && j==50)
            {
                printf("M");

                Sleep(ar);
                continue;
            }
            if(i==12 && j==52)
            {
                printf("Y");

                Sleep(ar);
                continue;
            }
            if(i==12 && j==57)
            {
                printf("P");

                Sleep(ar);
                continue;
            }
            if(i==12 && j==59)
            {
                printf("R");

                Sleep(ar);
                continue;
            }
            if(i==12 && j==61)
            {
                printf("O");

                Sleep(ar);
                continue;
            }
            if(i==12 && j==63)
            {
                printf("J");

                Sleep(ar);
                continue;
            }
            if(i==12 && j==65)
            {
                printf("E");

                Sleep(ar);
                continue;
            }
            if(i==12 && j==67)
            {
                printf("C");

                Sleep(ar);
                continue;
            }
            if(i==12 && j==69)
            {
                printf("T");

                Sleep(ar);
                continue;
            }

            // gotoxy(20,20);
            //  printf("Press any Key to continue...");

            gotoxy(j,i);
            printf("\xB2");
            Sleep(.1);
            gotoxy(j,i);
            printf(" ");

        }
    }

    gotoxy(40,20);
    printf("Press my key to continue...");

    getch();

    menu();

}




void menu()
{

    system("COLOR B0");
    system("cls");

    int ch;

    for(int i=0; i<3; i++)
    {
        for(int j=0; j<111; j++)
            printf("\xB2");
        printf("\n");
    }

    gotoxy(0,22);

    for(int i=0; i<3; i++)
    {
        for(int j=0; j<111; j++)
            printf("\xB2");
        printf("\n");
    }

    printf("\n\n\n\n");

    gotoxy(25,6);

    printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 MOVIE TICKET BOOKING SYSTEM");

    printf(" \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n");

    gotoxy(36,9);

    printf("\xDB\xDB\xDB\xDB\xB2 1- Admin\n\n");

    gotoxy(36,12);

    printf("\xDB\xDB\xDB\xDB\xB2 2- User\n\n");

    gotoxy(36,15);

    printf("\xDB\xDB\xDB\xDB\xB2 3- Exit system:\n\n");

    gotoxy(25,18);

    printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n");

    gotoxy(42,20);

    printf("Enter your choice: ");

    scanf("%d",&ch);

    switch (ch)

    {
    case 1 :

        Admin();

        break;



    case 2:

        user_login();


        break;

    case 3:

        exit(1);


        break;

    default:

        printf("\nWrong choice!!!\nTry Again!!!");

        //   getch();

        menu();

    }

}


/*             ************** Admin panel  ****************            */


void Admin()
{

    system("cls");

    int ch1;


    printf("\n\n\n\n");

    gotoxy(14,3);
    printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Welcome Admin panel");
    printf(" \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    //  printf("                   *****************#######*****************\n\n");
    gotoxy(20,6);
    printf("\xDB\xDB\xDB\xDB\xB2 1- To Add New Movie \n\n");
    gotoxy(20,8);
    printf("\xDB\xDB\xDB\xDB\xB2 2- To Delete Now Playing Movie \n\n");
    gotoxy(20,10);
    printf("\xDB\xDB\xDB\xDB\xB2 3- To View All Transactions  \n\n");
    gotoxy(20,12);
    printf("\xDB\xDB\xDB\xDB\xB2 4- To Delete All Transactions  \n\n");
    gotoxy(20,14);
    printf("\xDB\xDB\xDB\xDB\xB2 5- Exit Admin panel\n\n");

    printf("\t       **********************************************\n");
    gotoxy(28,17);
    printf("Enter your choice: ");
    scanf("%d",&ch1);


    switch (ch1)

    {
    case 1 :

        Add_Movie();

        break;



    case 2:

        Delete_Movie();

        break;

    case 3:

        Old_Transactions();

        break;

    case 4:

        Delete_Transactions();

        break;

    case 5:

        menu();

        break;


    default:

        printf("\nWrong choice!!!\nTry Again!!!");

        Admin();

    }

}

/*        **************************User penal*********************             */

void User()
{
    system("cls");

    int ch2;

    printf("\n\n\n\n");
    gotoxy(14,3);

    printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 User panel");

    printf(" \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");

    gotoxy(20,6);

    printf("\xDB\xDB\xDB\xDB\xB2 1- To Book Tickets\n\n");

    gotoxy(20,8);

    printf("\xDB\xDB\xDB\xDB\xB2 2- To View Now Playing Movie\n\n");

    gotoxy(20,10);

    printf("\xDB\xDB\xDB\xDB\xB2 3- Exit\n\n");

    gotoxy(12,12);

    printf(" *****************************************\n");

    gotoxy(24,14);

    printf("Enter your choice:");

    scanf("%d",&ch2);

    switch (ch2)

    {
    case 1 :

        Book_Ticket();

        break;



    case 2:

        View_Movie();

        break;

    case 3:

        menu();

        break;



    default:

        printf("\nWrong choice!!!\nTry Again!!!");

        User();

    }


}


/////////////////////////////////////////////////////////////////////

void user_login()
{

    system("cls");

    int ch2;

    printf("\n\n\n\n");
    gotoxy(14,3);
    printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 User panel");

    printf(" \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");

    gotoxy(20,6);

    printf("\xDB\xDB\xDB\xDB\xB2 1- register \n\n");

    gotoxy(20,8);

    printf("\xDB\xDB\xDB\xDB\xB2 2- login \n\n");

    gotoxy(20,10);

    printf("\xDB\xDB\xDB\xDB\xB2 3- Exit \n\n");

    gotoxy(12,12);

    printf(" *****************************************\n");

    gotoxy(24,14);

    printf("Enter your choice: ");

    scanf("%d",&ch2);

    switch (ch2)

    {
    case 1 :

        rgister();

        break;



    case 2:

        login();

        break;
    case 3:

        menu();

        break;


    default:

        printf("\nWrong choice!!!\nTry Again!!!");

        user_login();

    }





}





void rgister()

{

    system("cls");

    FILE *log; /// pointing file password.txt

    log = fopen("password.txt", "wb+"); ///file open password.txt

    struct login u;


    gotoxy(20, 3);

    printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 REGISTER");

    printf(" \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");

    gotoxy(20, 6);

    printf("\xDB\xDB\xDB\xDB\xB2 Enter First name: ");

    scanf("%s", &u.fname);



    gotoxy(20, 8);

    printf("\xDB\xDB\xDB\xDB\xB2 Enter Last name: ");

    scanf("%s", &u.lname);



    gotoxy(20, 10);

    printf("\xDB\xDB\xDB\xDB\xB2 Enter User name: ");

    scanf("%s", &u.username);


    int i = 0;

    char VP; // VP is every character of variable;

    char pass[20];

    gotoxy(20, 12);

    printf("\xDB\xDB\xDB\xDB\xB2 Enter password :");

    while ((VP =_getch()) != 13)   ////if Enter
    {
        pass[i] = VP;

        i++;

        printf("*");
    }
    pass[i] = '\0';

    printf("\npass1 %s",pass);


    for(int i=0; i<strlen(pass); i++)
    {
        pass[i]=pass[i]-0XAED;  /////encrypted  with key OXAFD

    }


    printf("pass1 %s",pass);

    strcpy(u.password, pass); //// copy temporary encrypted password in pass variable

    printf("pass %s",u.password);

    fwrite(&u,sizeof(u),1,log); ////writing encrypted password in file

    fclose(log);  ////file close password.txt

    system("cls");

    login();

}

void login()

{
    system("cls");

    char username[200],password[20];

    char pass[20]; //temporary encrypted password variable

    FILE *log;

    log=fopen("password.txt","r");


    struct login u;

    gotoxy(20, 3);

    printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 LOG IN");

    printf(" \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");


    gotoxy(20, 6);

    printf("\xDB\xDB\xDB\xDB\xB2 User name:");

    scanf("%s",&username);

    int i = 0;

    char VP;  // VP every character of password variable;

    gotoxy(20, 8);

    printf("\xDB\xDB\xDB\xDB\xB2 Password :");

    while ((VP = getch()) != 13) ///if enter
    {
        password[i] = VP;

        i++;

        printf("*");

    }

    password[i] = '\0';

    while(fread(&u,sizeof(u),1,log))

    {
        strcpy(pass,u.password); //// copy temporary encrypted password in u.password variable

    }
    for(int i=0; i<strlen(pass); i++)

    {
        pass[i]=pass[i]+0XAED; //// decrypt password

    }
    if(strcmp(pass,password)==0)  ////compare

    {
        User();

        return;
    }

    else
    {

        gotoxy(20, 8);

        printf("\xDB\xDB\xDB\xDB\xB2 Password : Invalid Password");


    }

    int D;

    printf("Press 1 for try again");

    printf("press any key Exit");

    scanf("%d",&D);

    if(D==1)

        login();

    else
        exit(0);

}




/*             ************** View movie ****************            */

void View_Movie()

{

    system("color 30");

    char ch;

    int s1,s2,s3,s4;

    FILE *fp;



    fp = fopen("data.txt","r");

    if(fp == NULL)

    {

        printf("file does not found !");

        exit(1);



    }

    else

    {

        system("cls");

        if((ch=fgetc(fp))!=EOF)

        {


            fp=fopen("data.txt","r");

            fscanf(fp,"%s  %s  %d  %d  %d  %d\n%d %d %d %d",b.name,b.date,&b.r1,&b.r2,&b.r3,&b.balcony,&s1,&s2,&s3,&s4);

            gotoxy(20,3);
            printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Now Playing");

            printf(" \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");

            gotoxy(20,6);

            printf("Movie Name: %s",b.name);
            gotoxy(20,9);
            printf("Release Date: %s",b.date);

            //printf("Ticket pricing:\n1.Row 1 to 4: %d Tk per seat (%d seats available)\n2.Row 5 to 8: %d Tk per seat (%d seats available)\n3.Row 9 to 12: %d Tk per seat (%d seats available)\n4.Balcony: %d Tk per seat (%d seats available)\n",b.r1,s1,b.r2,s2,b.r3,s3,b.balcony,s4);

            gotoxy(20,12);

            printf("Ticket pricing:");

            gotoxy(20,14);

            printf("1.Row 1 to 4: %d Tk per seat (%d seats available)",b.r1,s1);
            gotoxy(20,16);

            printf("2.Row 5 to 8: %d Tk per seat (%d seats available)",b.r2,s2);
            gotoxy(20,18);

            printf("3.Row 9 to 12: %d Tk per seat (%d seats available)",b.r3,s3);
            gotoxy(20,20);

            printf("4.Balcony: %d Tk per seat (%d seats available)",b.balcony,s4);


            //printf("\nTicket pricing:\n\t\tRow 1 to 4: %d Rs.\n\t\tRow 5 to 8: %d Rs.\n\t\tRow 9 to 12: %d Rs.\n\t\tBalcony: %d Rs.\n\n",b.r1,b.r2,b.r3,b.balcony);

            //Sleep(2000);


            fclose(fp);

            int c;
            gotoxy(20,24);
            printf(" press 1 to exit: ");
            scanf("%d",&c);

            if(c==1)
            {

                User();

            }



        }

        else

        {
            gotoxy(20,3);

            printf("No movie available, please check after few days!!!");

            Sleep(2000);

            User();

        }

    }

    fclose(fp);

}



/*             ************** Adding movies ****************            */


void Add_Movie()

{

    system("color 30");

    char temp2,password[]="password",p[100],p1[]="_back_",p2[]="_BACK_";

    int l,s1=40,s2=40,s3=40,s4=80;

    FILE *fp;

    struct book b;

    system ("cls");

    gotoxy(40, 3);

    printf("<--:CAUTION!!!:-->");

    gotoxy(6, 6);

    printf("This will delete the movie which the currently playing (if available) and will add a new movie!!!");

    gotoxy(20, 9);

    printf("If you want to go back then type '_back_' or '_BACK_'");

    //printf("\n\t\t\tCaution!!!\nThis will delete now playing movie (if available) and will add new movie!!!\nIf you want to go back then type '_back_' or '_BACK_'");

login:

    {

        l=0;

        gotoxy(20,12);

        printf("Enter Password:");

        while(1)

        {

            temp2=getch();

            if(temp2=='\r')

            {

                p[l]='\0';

                break;

            }

            else if(temp2=='\b')

            {

                if(l>0)

                {

                    l--;

                    printf("\b \b");

                }

            }

            else if(temp2=='\t'||temp2==' ')

            {

                continue;

            }

            else

            {

                p[l]=temp2;

                l++;

                printf("*");

            }



        }


        if(strcmp(p,password)==0)

        {

            system("cls");
            gotoxy(30,3);
            printf("Password matched...\n");
            gotoxy(20,5);
            printf("Enter Movie name (Use '_' for spaces):- ");

            scanf("%s",b.name);
            gotoxy(20,7);
            printf("Enter Release Date(DD/MM/YYYY):- ");

            scanf("%s",b.date);
            gotoxy(20,9);
            printf("Enter Ticket Price for row 1 to 4 (Tk.):- ");

            scanf("%d",&b.r1);
            gotoxy(20,11);
            printf("Enter Ticket Price for row 5 to 8 (Tk.):- ");

            scanf("%d",&b.r2);
            gotoxy(20,13);
            printf("Enter Ticket Price for row 9 to 12 (Tk.):- ");

            scanf("%d",&b.r3);
            gotoxy(20,15);
            printf("Enter Ticket Price for balcony (Tk.):- ");

            scanf("%d",&b.balcony);

            fp=fopen("data.txt","w");



            if(fp==NULL)

            {
                gotoxy(30,3);
                printf("File not Found");

            }

            else

            {


                fprintf(fp,"%s  %s  %d  %d  %d  %d\n%d %d %d %d",b.name,b.date,b.r1,b.r2,b.r3,b.balcony,s1,s2,s3,s4);

                gotoxy(20,17);

                printf("Adding movie. Please wait");

                Sleep(1000);

                printf(".");

                Sleep(1000);

                printf(".");

                Sleep(1000);

                printf(".");

                Sleep(1000);
                gotoxy(20,19);
                printf("Movie added successfully. Returning to Admin Panel");

                Sleep(1000);

                printf(".");

                Sleep(1000);

                printf(".");

                Sleep(1000);

                printf(".");

                Sleep(1000);

                Admin();




            }

            printf("\n");

            fclose(fp);



        }

        else if(strcmp(p,p1)==0||strcmp(p,p2)==0)

        {
            gotoxy(20,19);
            printf("Okay! Precess cancelled. Returning to Admin Panel");

            Sleep(1000);

            printf(".");

            Sleep(1000);

            printf(".");

            Sleep(1000);

            printf(".");

            Sleep(1000);

            Admin();
        }

        else

        {
            gotoxy(20,19);
            printf("Invalid Password!!!");

            goto login;

        }

    }



}


/*                  *********************Delete Movies ************************                */


void Delete_Movie()

{

    system("color 30");
    system("cls");

    int l;

    FILE *fp;

    char temp2,password[]="password",p[100];

login:

    {

        l=0;
        gotoxy(20,3);
        printf("Enter Password:");

        while(1)

        {

            temp2=getch();

            if(temp2=='\r')

            {

                p[l]='\0';

                break;

            }

            else if(temp2=='\b')

            {

                if(l>0)

                {

                    l--;

                    printf("\b \b");

                }

            }

            else if(temp2=='\t'||temp2==' ')

            {

                continue;

            }

            else

            {

                p[l]=temp2;

                l++;

                printf("*");

            }

        }

        //scanf("%s",&p);

        if(strcmp(p,password)==0)

        {
            gotoxy(30,6);
            printf("Password matched...\n");

            fp = fopen("data.txt","w");

            if(fp == NULL)

            {
                gotoxy(30,8);
                printf("file does not found!");

                exit(1);

            }

            else

            {
                gotoxy(20,10);
                printf("Deleting movie");

                Sleep(1000);

                printf(".");

                Sleep(1000);

                printf(".");

                Sleep(1000);

                printf(".");

                Sleep(1000);
                gotoxy(30,12);
                printf("Movie Deleted Successfully!!!\n\n");

                Sleep(3000);

                Admin();

            }

            fclose(fp);

        }

        else

            goto login;

    }

}


/*                  *********************booking ticket and  bill************************                */



void Book_Ticket()

{

    system("color 30");

    struct book b;

    FILE *fp;

    FILE *ufp;

    int total_seat,total_amount,row,temp_row,i,j,k,s1,s2,s3,s4;

    long long int mobile;

    char name1[15],name2[15];

    char ch,choice,ch1;

    fp=fopen("data.txt","r");

    if(fp==NULL)

    {

        printf("file does not found!");

        exit(1);

    }

    else if(ch=fgetc(fp)==EOF)

    {

        printf("\n     No Movie is available to book right now! Check after few days!!!");
        //  getch();
        Sleep(3000);
        User();

    }

    else

    {

        system("cls");

        fp=fopen("data.txt","r");

        fscanf(fp,"%s  %s  %d  %d  %d  %d\n%d %d %d %d",b.name,b.date,&b.r1,&b.r2,&b.r3,&b.balcony,&s1,&s2,&s3,&s4);
        gotoxy(14,3);
        printf("=================== Now Playing =====================");
        gotoxy(20,5);
        printf("Movie Name: %s",b.name);
        gotoxy(20,6);
        printf("Release Date (DD/MM/YYYY): %s",b.date);
        gotoxy(20,8);
        printf("Ticket pricing (per seat):");
        gotoxy(20,9);
        printf("Row 1 to 4: %d Tk.",b.r1);
        gotoxy(20,10);
        printf("Row 5 to 8: %d Tk.",b.r2);
        gotoxy(20,11);
        printf("Row 9 to 12: %d Tk.",b.r3);
        gotoxy(20,12);
        printf("Balcony: %d Tk.",b.balcony);
        gotoxy(14,13);
        printf("==================================================");

    }

    if(s1==0&&s2==0&&s3==0&&s4==0)

    {

        printf("The seats are full! Visit after few days...\n\n");

        menu();

    }

    else

        goto choose;

    fclose(fp);

choose:

    {

        fp=fopen("data.txt","r");

        fscanf(fp,"%s  %s  %d  %d  %d  %d\n%d %d %d %d",b.name,b.date,&b.r1,&b.r2,&b.r3,&b.balcony,&s1,&s2,&s3,&s4);

        fclose(fp);
        gotoxy(14,15);
        printf("Do you want to Book tickets for above movie?(y/n)\n");

        scanf("%s",&choice);

        if((choice=='y')||(choice=='Y'))

        {

            system("cls");

            printf("\t\t   \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Fill Deatails \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");

name:

            printf("\n\n\t\t Enter your name (First Name<space>Last Name):");

            scanf("%s %s",name1,name2);



            for(i=0; i<strlen(name1); i++)

            {

                int j=name1[i];

                if((j>=97 && j<=122) || (j>=65 && j<=90) || (j==32 && j==92))

                {

                    continue;

                }

                else

                {

                    printf("\n\t\t First name is invalid! Enter alphabets only!!!");

                    goto name;

                }

            }

            for(i=0; i<strlen(name2); i++)

            {

                k=name2[i];

                if((k>=97 &&k <=122) || (k>=65 && k<=90) || (k==32 && k==92))

                {

                    continue;

                }

                else

                {

                    printf("\n\t\t Last name invalid! Enter alphabets only!!!");

                    goto name;

                }

            }



next:

            mobile=0;

            printf("\n\t\t Enter mobile number :");

            scanf("%lld",&mobile);


            if(mobile<=00000000000)

            {

                printf("\n\t\t Invalid mobile number!!!\n");

                goto next;

            }

            else if(mobile>99999999999)
            {

                printf("\n\t\t Invalid mobile number!!!\n");

                goto next;

            }

            else if(mobile>=00000000000 && mobile<=99999999999)

            {

                goto seats;

            }

seats:

            /////printf("\nSelect rows:\n1.Row 1 to 4: %d Tk  per seat (%d seats available)\n2.Row 5 to 8: %d Tk per seat (%d seats available)\n3.Row 9 to 12: %d Tk per seat (%d seats available)\n4.Balcony: %d Tk per seat (%d seats available)\n",b.r1,s1,b.r2,s2,b.r3,s3,b.balcony,s4);


            ////////////////////////////b.r1,s1,b.r2,s2,b.r3,s3,b.balcony,s4



            printf("\n\n\t\t Select rows:\n");



            printf("\n\t\t 1.Row 1 to 4: %d Tk  per seat (%d seats available)\n",b.r1,s1);


            printf("\n\t\t 2.Row 5 to 8: %d Tk per seat (%d seats available)\n",b.r2,s2);


            printf("\n\t\t 3.Row 9 to 12: %d Tk per seat (%d seats available)\n",b.r3,s3);


            printf("\n\t\t 4.Balcony: %d Tk per seat (%d seats available)\n",b.balcony,s4);


            ////////////////////////////


            printf("\n\t\t Enter your choice: ");

            scanf("%d",&row);

            temp_row=row;

            if(row==1)

                row=b.r1;

            else if(row==2)

                row=b.r2;

            else if(row==3)

                row=b.r3;

            else if(row==4)

                row=b.balcony;

            else

            {

                printf("\n\t\t Wrong Choice!!!");

                goto seats;

            }

            fp=fopen("data.txt","r");

            fscanf(fp,"%s  %s  %d  %d  %d  %d\n%d %d %d %d",b.name,b.date,&b.r1,&b.r2,&b.r3,&b.balcony,&s1,&s2,&s3,&s4);

            fclose(fp);

enter:

            printf("\n\t\t Enter total number of seats:");

            scanf("%d",&total_seat);

            if(total_seat==0)

            {

                printf("\n\t\t Number of seats should not be 0...");

                goto enter;

            }

            else if(temp_row==1)

            {

                if(total_seat>s1)  // if(s1==0)

                {

                    printf("\n\t\t %d seats are not available in row 1 to 4!",total_seat);

choice1:

                    printf("\n\t\t Do you want to change row?(1=Yes, 0=No)");

                    scanf("%d",&ch1);

                    if(ch1==1)

                        goto seats;

                    else if(ch1==0)

                    {

                        printf("\n\t\t Okay! No problem!!!\n\n");

                        Sleep(2000);

                        menu();

                    }



                    else

                    {

                        printf("\n\t\t Wrong choice!!!");

                        goto choice1;

                    }

                }

                else if(temp_row<=s1)

                {

                    s1=s1-total_seat;

                    goto booking;

                }

            }


            else if(temp_row==2)

            {

                //if(s2==0)

                if(total_seat>s2)

                {

                    printf("\n\t\t %d seats are not available in row 5 to 8!",total_seat);

choice2:

                    printf("\n\t\t Do you want to change row?(1=Yes, 0=No)");

                    scanf("%d",&ch1);

                    if(ch1==1)

                        goto seats;

                    else if(ch1==0)

                    {

                        printf("\nOkay! No problem!!!\n\n");

                        menu();

                    }

                    else

                    {

                        printf("\n\t\t Wrong choice!!!");

                        goto choice2;

                    }

                }

                else if(temp_row<=s2)

                {

                    s2=s2-total_seat;

                    goto booking;

                }

            }

            else if(temp_row==3)

            {

                //if(s3==0)

                if(total_seat>s3)

                {

                    printf("\n\t\t %d seats are not available in row 9 to 12!",total_seat);

choice3:

                    printf("\n\t\t Do you want to change row?(1=Yes, 0=No)");

                    scanf("%d",&ch1);

                    if(ch1==1)

                        goto seats;

                    else if(ch1==0)

                    {

                        printf("\n\t\t Okay! No problem!!!\n\n");

                        menu();

                    }

                    else

                    {

                        printf("\n\t\t Wrong choice!!!");

                        goto choice3;

                    }

                }

                else if (temp_row<=s3)

                {

                    s3=s3-total_seat;

                    goto booking;

                }

            }

            else if(temp_row==4)

            {

                //if(s4==0)

                if(total_seat>s4)

                {

                    printf("\n\t\t %d seats are not available in balcony!",total_seat);

choice4:

                    printf("\n\t\t Do you want to change row and book tickets? (1=Yes, 0=No)\n");

                    scanf("%d",&ch1);

                    if(ch1==1)

                        goto seats;

                    else if(ch1==0)

                    {

                        printf("\n\t\t Okay! No problem!!!\n\n");

                        main();

                    }

                    else

                    {

                        printf("\n\t\t Wrong choice!!!");

                        goto choice4;

                    }

                }

                else if(temp_row<=s4)

                {

                    s4=s4-total_seat;

                    goto booking;

                }

            }

booking:

            {

                total_amount=row*total_seat;

/////////////////////////////////////////////////////////////////////////////////

                system("cls");
                gotoxy(30,3);
                printf("Tckets Booked successfully!!!");
                gotoxy(35,5);
                printf(" *** ENJOY MOVIE *** ");
                gotoxy(35,7);
                printf(" Generating Bill");


                Sleep(750);

                printf(".");

                Sleep(750);

                printf(".");

                Sleep(750);

                printf(".");

                Sleep(750);
                gotoxy(35,9);
                printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2Bill");
                gotoxy(20,11);
                printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
                gotoxy(20,13);
                printf("Name : %s %s",name1,name2);
                gotoxy(20,15);
                printf("Mobile Number : %lld",mobile);
                gotoxy(20,17);
                printf("Movie name : %s",b.name);

                if(temp_row==1)
                {
                    gotoxy(20,19);
                    printf("Row : 1 to 4");
                }
                else if(temp_row==2)
                {
                    gotoxy(20,19);
                    printf("Row : 5 to 8");
                }
                else if(temp_row==3)
                {
                    gotoxy(20,19);
                    printf("Row : 9 to 12");
                }
                else if(temp_row==4)
                {
                    gotoxy(20,19);
                    printf("Row : Balcony");
                }
                gotoxy(20,21);
                printf("Total seats : %d",total_seat);
                gotoxy(20,23);
                printf("Cost per ticket : %d Tk",row);
                gotoxy(20,25);
                printf("Total Amount : %d TK",total_amount);
                gotoxy(20,27);
                //printf("========================================================");
                printf("********************************************************");
                gotoxy(20,29);
                printf("Thank You! Visit again!!!\n\n");

                Sleep(3000);
                ////////////////////////////////////////
                //// getch();

                // menu();                      //////////////////////////////////////////////////////////////////

                ufp=fopen("OldTransaction.txt","a");

                if(ufp == NULL)

                {

                    printf("File not Found!");

                }

                else

                {

                    fprintf(ufp,"%s %s %lld %d %d %d %s %d \n",name1,name2,mobile,total_seat,temp_row,total_amount,b.name,row);

                }

                printf("\n");

                fclose(ufp);

                ufp=fopen("data.txt","w");

                fprintf(ufp,"%s  %s  %d  %d  %d  %d\n%d %d %d %d",b.name,b.date,b.r1,b.r2,b.r3,b.balcony,s1,s2,s3,s4);



                fclose(ufp);

                int c;
                gotoxy(20,31);
                printf("press 1 to exit: ");
                scanf("%d",&c);

                if(c==1)
                {

                    User();

                }

            }

        }

        else if((choice=='n')||(choice=='N'))

        {

            printf("\t\t No problem! Visit after few days!");

            //  getch();

            User();

        }

        else

        {

            printf("\n\t\tWrong Choice!!!");

            goto choose;

        }

    }

}





void Old_Transactions()

{

    system("color 30");

    char temp2,ch,password[]="password",p[100],p2[100];

    int l;

    FILE *fp;



    //system("clear");



    fp = fopen("OldTransaction.txt","r");

    if(fp == NULL)

    {

        printf("file does not found !");

        exit(1);



    }

    else

    {

        system("cls");

login:

        {

            l=0;

            printf("\nEnter Password:");

            while(1)

            {

                temp2=getch();

                if(temp2=='\r')

                {

                    p[l]='\0';

                    break;

                }

                else if(temp2=='\b')

                {

                    if(l>0)

                    {

                        l--;

                        printf("\b \b");

                    }

                }

                else if(temp2=='\t'||temp2==' ')

                {

                    continue;

                }

                else

                {

                    p[l]=temp2;

                    l++;

                    printf("*");

                }



            }

            //scanf("%s",&p);

            if(strcmp(p,password)==0)

            {

                system("cls");

                printf("\nPassword matched...\nFetching old transactions");

                Sleep(1000);

                printf(".");

                Sleep(1000);

                printf(".");

                Sleep(1000);

                printf(".");

                Sleep(1000);

                printf("\n\n\t***Old Ticket Booking Records***");

                printf("\n===============================================");

                printf("\nName  Mobile  Seats  Row  Bill  Movie  Price");

                printf("\n===============================================\n");

                while( ( ch = fgetc(fp))!=EOF)

                    printf("%c",ch);

                printf("===============================================\n\n");

            }

            else

            {

                printf("\nInvalid Password!!!");

                goto login;

            }

        }

    }

    fclose(fp);

    int c;
    printf("press 1 to exit: ");
    scanf("%d",&c);

    if(c==1)
    {

        Admin();

    }


}




void Delete_Transactions()

{

    system("color 30");
    system("cls");
    int l;

    FILE *fp;

    char temp2,password[]="password",p[100];

login:

    {

        l=0;
        gotoxy(20,3);
        printf("Enter Password:");

        while(1)

        {

            temp2=getch();

            if(temp2=='\r')

            {

                p[l]='\0';

                break;

            }

            else if(temp2=='\b')

            {

                if(l>0)

                {

                    l--;

                    printf("\b \b");

                }

            }

            else if(temp2=='\t'||temp2==' ')

            {

                continue;

            }

            else

            {

                p[l]=temp2;

                l++;

                printf("*");

            }



        }

        //scanf("%s",&p);

        if(strcmp(p,password)==0)

        {

            printf("Password matched...");

            fp = fopen("OldTransaction.txt","w");

            if(fp == NULL)

            {
                gotoxy(20,4);
                printf("file does not found!");

                exit(1);

            }

            else

            {
                gotoxy(20,6);
                printf("Deleting old transactions");

                Sleep(1000);

                printf(".");

                Sleep(1000);

                printf(".");

                Sleep(1000);

                printf(".");

                Sleep(1000);
                gotoxy(20,8);
                printf("Old transactions Deleted Successfully!!!\n");

                Sleep(2000);

                main();

            }

        }

        else

            goto login;

    }

    fclose(fp);

}
