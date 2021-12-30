#include "header.h"
#include<stdio.h>
//#include<stdlib.h>

//#include<stdbool.h>


void MainMenu()
{
	int (*fptr[])()={add,view,modify,deleteEmp}; // created array of function pointers.
	char choice;
	
	printf("...........Main Menu..........\n");
	
	
	
	printf("1.add \n2.view \n3.modify \n4.delete\n*.Exit\n");
	scanf(" %c",&choice);
	
	
	if(choice == '1')
	{
		printf("\nSelected opt1\n");
		int b = (fptr[0])();
		if(!b)
		{
			printf("\nSuccess...\n");
			MainMenu();
		}
		else{
			printf("\nFailure...\n");
			MainMenu();
		}
	}
	else if(choice == '2')
	{
		printf("\nSelected opt2\n");
		int b = (fptr[1])();
		if(!b)
		{
			printf("\nSuccess...\n");
			MainMenu();
		}
		else
		{
			printf("\nFailure...\n");
			MainMenu();
		}
	}
	else if(choice == '3')
	{
		printf("\nSelected opt3\n");
		int b =(fptr[2])();
		if(!b)
		{
			printf("\nSuccess...\n");
			MainMenu();
		}
		else
		{
			printf("\nFailure...\n");
			MainMenu();
		}
	}
	else if(choice == '4')
	{
		printf("\nSelected opt4\n");
		int b =(fptr[3])();
		if(!b)
		{
			printf("\nSuccess...\n");
			MainMenu();
		}
		else
		{
			printf("\nFailure...\n");
			MainMenu();
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


