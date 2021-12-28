#include <stdio.h>
#include <stdlib.h>
//#include <string.h> 
#include "header.h"

#define size 50

EMP *start=NULL,*last=NULL;
void add(){

char repo;
printf("Enter Details : \n");
		
		EMP *new_value = NULL;
		new_value = (EMP*)malloc(sizeof(EMP));

		printf("Enter Name : \n");
		new_value->NAME = malloc(size);
		char input[size];
		scanf("%s",&input);
		new_value->NAME = input;
		
		printf("\nEnter EMAIL : \n");
		new_value->EMAIL = malloc(size);
		char input1[size];
		scanf("%s",&input1);
		new_value->EMAIL = input1;

		
		printf("\nEnter BAND : \n");
		new_value->BAND = malloc(size);
		char input2[size];
		scanf("%s",&input2);
		new_value->BAND = input2;

		
		printf("\nEnter DATE : ");
		new_value->DATE = malloc(size);
		char input3[size];
		scanf("%s",&input3);
		new_value->DATE = input3;
		
		printf("\nEnter MOBILE : ");
		new_value->MOBILE = malloc(size);
		char input4[size];
		scanf("%s",&input4);
		new_value->MOBILE = input4;
		
		printf("\nEnter MANAGER Name : ");
		new_value->MANAGER = malloc(size);
		char input5[size];
		scanf("%s",&input5);
		new_value->MANAGER = input5;
	
		
		printf("You have Reporteees : Yes(Y)/No(N) : ");
		scanf(" %c",&repo);

		if (repo == 'Y'){
		printf("Enter total no. of reporteees : \n");
		int total;
		scanf("%d",&total);

		
		for (int j=0;j<total;j++){
			new_value->reportees[j].ID = "12";
			new_value->reportees[j].NAME = "User";
		}
		}
		else{
		new_value->reportees[0].ID = "NA";
		new_value->reportees[0].NAME = "NA";
		}
		
		printf("\nEnter TechArea : ");
		new_value->TechArea = malloc(size);
		char input6[size];
		scanf("%s",&input6);
		new_value->TechArea = input6;
		
		printf("\nEnter Project/Bench : ");
		new_value->Project = malloc(size);
		char input7[size];
		scanf("%s",&input7);
		new_value->Project = input7;
		
		new_value->link = NULL;
		
		if (start == NULL){
		start = new_value;
		last = new_value;
		}
		
		else{
		last->link = new_value;
		last = new_value;
		}
}

void display()
{
	printf("Nodes are : \n");
	EMP *disp =NULL;
	disp = start;
	
	while(disp)
	{		
	printf("%s\t",disp->NAME);
	printf("%s\t",disp->EMAIL);
	printf("%s\t",disp->BAND);
	printf("%s\t\n",disp->DATE);
	disp = disp->link;
	}
}
int main(){

	//FILE *fptr;
	//EMP *start,*new_value,*next,*disp;
	//extern EMP *head_node;
	//fptr = fopen("sample_write_xlsx.xlsx","a");
	
	//char ch, name[20]="HELLO";
	//int id = 20;
	//char repo;
		
	add();
	add();
	
	display();

	#if 0
	
	int start_file;
	if (start_file){
	fprintf(fptr,"ID\tName\n");
	start_file = 0;
	}
	fprintf(fptr,"%d\t%s\n",id,name);
	//fprintf(fptr,"%d\t%s\n",id,name);
	//fprintf(fptr,"%d\t%s\n",id,name);
	
	fclose(fopen("sample_write_xlsx.xlsx", "w"));
	#endif
	
	return 0;
}
