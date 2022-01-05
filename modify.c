#include "header.h"

int modify()
{
	printf("This is modify function");
	
	char ch1;
	//printf("This is  function");
	
	printf("\n 1.Enter for modify.\n *.Back to MainMenu.");
	scanf(" %c",&ch1);
	if(ch1 == '1')
	{	
		return(modify_details());
	}
	else if(ch1 == '*')
	{
		MainMenu();
	}
	else
	{
		return 1;
	}
	
	
	return 0;
	
}


char details_choice()
{
	char ch;
	printf("\nYou can modify the following values only.\n");
	printf("\n1.Employee name.\n2.band.\n3.phoneNo.\n4.reporting Manager.\n5.Reportees.\n6.Tech Area.\n7.projectInfo.\n8.Status.\n*.Exit form the choices");
	printf("Enter the choice above...");
	scanf(" %c",&ch);
	return ch;
}

void modify_details()
{
	EMP e;
	const char id[max_size];
	//char reporteeNameId[max_size];
	printf("\nEnter the Emp Id for modifying the details...\n");  
	scanf("%s",&id);
	
	//printf("Enered id is: %s \n",id);
	FILE *read;
	/*
	
	typedef struct Employee
{
	const char empId[max_size];
	char doj[max_size];
	char phoneNo[max_size];
	char status[max_size];
	char projectInfo[max_size];
	char band[max_size];
	char techArea[max_size];
	char name[max_size];
	const char emailId[max_size];
	char reportingManager[max_size];
	//struct Reportee reportee;
	//char reporteeNameId[max_size];
	
}EMP;

	
	*/
	
	read = fopen("TSIndia_Emp_DB1.xlsx","r+");
	//write = fopen("TSIndia_Emp_DB1.xlsx","a+");
	while(fscanf(read,"%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\n",e.empId,e.name,e.emailId,e.band,e.doj,e.phoneNo,e.reportingManager,e.reporteeNameId,e.techArea,e.projectInfo,e.status) != EOF)
	{
		//printf("In while");
		printf("%s",e.empId);
		if(strcmp(id,e.empId) == 0)
		{
			//printf("In if");
		//fprintf(stdout,"%s\t %s\t %s\t %s\t %s\t %s\t %s\t %s\t %s\t %s \n",e.empId,e.name,e.emailId,e.band,e.doj,e.phoneNo,e.reportingManager,reporteeNameId,e.techArea,e.projectInfo,e.status);
			//fprintf(stdout,"%s",e.empId);
			
			char ch2;
			ch2 = details_choice();
			switch(ch2)
			{
				case '1':
					printf("Please enter the employee name");
					scanf("%s",e.name);
					details_choice();
					break;
				case '2':
					printf("Please enter the employee band");
					scanf("%s",e.band);
					details_choice();
					break;
				case '3':
					printf("Please enter the employee phone number");
					scanf("%s",e.phoneNo);
					details_choice();
					break;
				case '4':
					printf("Please enter the Reporting Manager");
					scanf("%s",e.reportingManager);
					details_choice();
					break;
				case '5':
					printf("Please enter the Reportees");
					printf("previous reportees are: %s",e.reporteeNameId);
					scanf("%s",e.reporteeNameId);
					details_choice();
					break;
				case '6':
					printf("Please enter the tech Area");
					scanf("%s",e.techArea);
					details_choice();
					break;
				case '7':
					printf("Please enter the project Info");
					scanf("%s",e.projectInfo);
					details_choice();
					break;
				case '8':
					printf("Please enter the status");
					scanf("%s",e.status);
					details_choice();
					break;
				default:
					break;
					
			}
			
		fprintf(read,"%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\n",e.empId,e.name,e.emailId,e.band,e.doj,e.phoneNo,e.reportingManager,e.reporteeNameId,e.techArea,e.projectInfo,e.status);
		}
	}
	
	//fclose(write);
	//fclose(read);
	return 0;
	

}






