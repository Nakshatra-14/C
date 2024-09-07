#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
	char name[20];
	printf("Enter your name: ");
	gets(name);
	printf("Hello %s",name);
	getch();
	return 0;
}