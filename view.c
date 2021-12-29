#include<stdio.h>
#include "header.h"

int view()
{
	char ch1;
	printf("This is view function");
	
	printf("\n 1.Enter for Details.\n *.Back to MainMenu.");
	scanf(" %c",&ch1);
	if(ch1 == '1')
	{	
		return(view_details());
	}
	else if(ch1 == '*')
	{
		MainMenu();
	}
	else
	{
		return 0;
	}
	
	
	return 1;
}


int view_details()
{
	EMP e;
	const char id[max_size];
	printf("\nEnter the Emp Id for displaying the details...\n");  
	scanf(" %s",&id);
	
	//printf("Enered id is: %s \n",id);
	FILE *fp;
	
	fp = fopen("TSIndia_Emp_DB1.xlsx","r");
	while(fscanf(fp,"%s\t %s\t %s\t %s\t %s\t %s\t %s\t %s\t %s\t %s\t \n",&e.empId,&e.name,&e.emailId,&e.band,&e.doj,&e.phoneNo,&e.reportingManager,&e.reporteeNameId,&e.techArea,&e.projectInfo,&e.status) != EOF)
	{
		if(strcmp(id,e.empId) == 0)
		{
		fprintf(stdout,"%s\t %s\t %s\t %s\t %s\t %s\t %s\t %s\t %s\t %s\t \n",e.empId,e.name,e.emailId,e.band,e.doj,e.phoneNo,e.reportingManager,e.reporteeNameId,e.techArea,e.projectInfo,e.status);
			//fprintf(stdout,"%s",e.empId);
		}
	}
	return 1;
}
