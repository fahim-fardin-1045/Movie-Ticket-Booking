#include <stdio.h>
#include <math.h>
#include <string.h>
#include <windows.h>
#include <time.h>

struct login
{
    char fname[120];
    char lname[60];
    char username[30];
    char password[20];
};
COORD coord = {0, 0}; // sets coordinates to 0,0

void gotoxy (int x, int y)
{
    coord.X = x;

    coord.Y = y; // X and Y coordinates

    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
int main()
{
    system("cls");

    system("COLOR 30");

    FILE *fp;

    fp = fopen("password.txt","wb");

    password();

    return 0;
}



void password()
{
    //printf("Succes");
    FILE *fp;
    fp = fopen("password.txt","rb+");

    if(strlen(fp)>0)
        login();


    else
        rgister();

    fclose(password);

}




void rgister()
{
    FILE *fp;

    fp = fopen("password.txt", "ab+");

    struct login one;

    gotoxy(20, 3);
    printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 REGISTER");
    printf(" \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");

    gotoxy(20, 6);
    printf("\xDB\xDB\xDB\xDB\xB2 Enter First name: ");
    scanf("%s", &one.fname);



    gotoxy(20, 8);

    printf("\xDB\xDB\xDB\xDB\xB2 Enter Last name: ");

    scanf("%s", &one.lname);



    gotoxy(20, 10);

    printf("\xDB\xDB\xDB\xDB\xB2 Enter User name: ");

    scanf("%s", &one.username);


    int i = 0;

    char VP; // VP every character of variable;

    char pass[20];

    gotoxy(20, 12);

    printf("\xDB\xDB\xDB\xDB\xB2 Enter password :");

    while ((VP =_getch()) != 13)
    {
        pass[i] = VP;

        i++;

        printf("*");
    }
    pass[i] = '\0';

    printf("\npass1 %s",pass);

    for(int i=0; i<strlen(pass); i++)
    {
        pass[i]=pass[i]-0XAED;

    }
    printf("pass1 %s",pass);

    strcpy(one.password, pass);

    printf("pass %s",one.password);

    fwrite(&one,sizeof(one),1,fp);

    fclose(fp);

    system("cls");

    login();
}
void login()
{
    char username[200],password[20];

    char pass[20];//temporary encrypted password variable

    FILE *fp;

    fp=fopen("password.txt","r");

    struct login one;

    printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 LOG IN");
    printf(" \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");


    gotoxy(20, 6);

    printf("\xDB\xDB\xDB\xDB\xB2 User name:");

    scanf("%s",&username);

    int i = 0;

    char VP; // VP every character of pasword variable;

    gotoxy(20, 8);
    printf("\xDB\xDB\xDB\xDB\xB2 Password :");

    while ((VP = getch()) != 13)
    {
        password[i] = VP;
        i++;
        printf("*");
    }
    password[i] = '\0';

    while(fread(&one,sizeof(one),1,fp))

    {
        strcpy(pass,one.password);

    }
    for(int i=0; i<strlen(pass); i++)

    {
        pass[i]=pass[i]+0XAED;

    }
    if(strcmp(pass,password)==0)

    {

       printf("\n \t\t\t\t    sucessful           ");

        return;
    }
    else
        printf("Invalid password");


}
