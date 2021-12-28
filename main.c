#include "header.h"
#include<stdio.h>
#include<stdlib.h>
//#include<stdbool.h>


void MainMenu()
{
	int (*fptr[])()={add,view,modify,deleteEmp}; // created array of function pointers.
	char choice;
	
	printf("...........Main Menu..........\n");
	
	
	
	printf("1.add \n2.view \n3.modify \n4.delete\n*.Exit");
	scanf("%c",&choice);
	
	
	if(choice == '1')
	{
		printf("\nSelected opt1\n");
		int b = (fptr[0])();
		if(b)
		{
			printf("\nSuccess...\n");
		}
		else{
		printf("\nFailure...\n");
		}
	}
	else if(choice == '2')
	{
		printf("Selected opt2");
		int b = (fptr[1])();
		if(b)
		{
			printf("Success...");
		}
		else
		{
			printf("Failure...");
		}
	}
	else if(choice == '2')
	{
		printf("Selected opt3");
		int b =(fptr[1])();
		if(b)
		{
			printf("Success...");
		}
		else
		{
			printf("Failure...");
		}
	}
	else if(choice == '4')
	{
		printf("Selected opt4");
		int b =(fptr[3])();
		if(b)
		{
			printf("Success...");
		}
		else
		{
			printf("Failure...");
		}
	}
	else if(choice == '*')
	{
		exit(0);
	}
	else{
		printf("\nIncorrect Option.\n");
		MainMenu();
	}

}


int main()
{	
	MainMenu();	
	return 0;
}


