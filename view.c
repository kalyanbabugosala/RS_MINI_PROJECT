#include "header.h"
//#include<string.h>
#include<stdio.h>

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
		return 1;
	}
	
	
	return 0;
}


int view_details()
{
	EMP e;
	const char id[max_size];
	char reporteeNameId[max_size];
	printf("\nEnter the Emp Id for displaying the details...\n");  
	scanf(" %s",&id);
	//printf("%s %d\n",id,strlen(id));
	
	//printf("Entered id is: %s \n",id);
	FILE *fp;
	
	/*
	
	typedef struct Employee
	{
		const char empId[max_size];
		char name[max_size];
		const char emailId[max_size];
		char band[max_size];
		const char doj[max_size];
	 	char phoneNo[max_size];
		char created_date[max_size];
		char reportingManager[max_size];
		char techArea[max_size];
		char projectInfo[max_size];
		char status[max_size];
		char releaving_date[max_size];
		//struct Reportee reportee;
		//char reporteeNameId[max_size];
	
	}EMP;
	
	*/
	
	fp = fopen("TSIndia_Emp_DB1.xlsx","r");
	while(fscanf(fp,"%s\t%s\t%s\t%s\t%s\t%s\t%[^\n]s\t%s\t%s\t%s\t%s\t%s\t%s\n",
			    e.empId,e.name,e.emailId,e.band,
			    e.doj,e.phoneNo,e.created_date,e.reportingManager,reporteeNameId,
			    e.techArea,e.projectInfo,e.status,e.releaving_date)!= EOF)
	{
		//printf("In While");
		//printf("%s %d\n",e.empId,strlen(e.empId));
		if(strcmp(id,e.empId) == 0)
		{	
			//printf("IN IF");
      //fprintf(stdout,"%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s",e.empId,e.name,e.emailId,e.band,e.doj,e.phoneNo,e.created_date,e.reportingManager,reporteeNameId,e.techArea,e.projectInfo,e.status,e.releaving_date);
			fprintf(stdout,"Employee Id is %s\n",e.empId);
			fprintf(stdout,"Employee Name is %s\n",e.name);
			fprintf(stdout,"Employee Email Id is %s\n",e.emailId);
			fprintf(stdout,"Employee Band is %s\n",e.band);
			fprintf(stdout,"Employee DOJ is %s\n",e.doj);
			fprintf(stdout,"Employee Phone number is %s\n",e.phoneNo);
			fprintf(stdout,"Employee created date is %s\n",e.created_date);
			fprintf(stdout,"Employee Reporting Manager is %s\n",e.reportingManager);
			fprintf(stdout,"Employee Reportees Name And Id is %s\n",reporteeNameId);
			fprintf(stdout,"Employee TechArea is %s\n",e.techArea);
			fprintf(stdout,"Employee Project Info is %s\n",e.projectInfo);
			fprintf(stdout,"Employee status is %s\n",e.status);
			fprintf(stdout,"Employee Releaving date is %s\n",e.releaving_date);
			
			
			
		}
	}
	fclose(fp);
	return 0;
}
