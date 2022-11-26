#include<stdio.h>

#include<stdlib.h>

#include<string.h>

#include<conio.h>

#include<windows.h>

#include<time.h>

struct book
{
	char code[20];
	char name[20];
	char date[20];
	int cost;


}b;


void Add_Movie_details();

int main(){

Add_Movie_details();

return 0;
}

void Add_Movie_details()
{

	FILE *fp;

	struct book b;

	printf("Enter movie code :- ");
	scanf("%s",b.code);

	printf("Enter Movie name (Use '_' for spaces):- ");

	scanf("%s",b.name);

	printf("Enter Release Date(DD/MM/YYYY):- ");

	scanf("%s",b.date);

	printf("Enter Ticket Price:- ");

	scanf("%d",&b.cost);

	fp=fopen("data.txt","a");

	if(fp == NULL)
	{
		printf("File not Found!!!");
	}
	else
	{
		fprintf(fp,"%s %s %s %d \n", b.code , b.name , b.date , b.cost);

		printf("Record insert Sucessfull ");

	}
		printf("\n");

	fclose(fp);

}


