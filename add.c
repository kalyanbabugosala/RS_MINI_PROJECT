#include<stdio.h>
//#include<string.h>
#include "header.h"
#include<time.h>


int add()
{
	char ch;
	printf("This is add function");
	
	printf("\n 1.Enter Details.\n *.Back to MainMenu.");
	scanf(" %c",&ch);
	if(ch == '1')
	{	
		return(add_details());
	}
	else if(ch == '*')
	{
		MainMenu();
	}
	else
	{
		return 1;
	}
	
	return 0;
}

char* timestamp(){
	
	  char *buffer = malloc(max_size);
	  time_t t = time(NULL);
	  struct tm  *tm;
	  tm= localtime(&t); 
	  
	  if ((tm->tm_hour) <12){
	  	
	  	sprintf(buffer,"%02d/%02d/%d %02d:%02d am", tm->tm_mday , tm->tm_mon + 1, tm->tm_year+ 1900, tm->tm_hour, tm->tm_min);
		//printf("%02d/%02d/%d %02d:%02d am", tm->tm_mday , tm->tm_mon + 1, tm->tm_year+ 1900, tm->tm_hour, tm->tm_min);
	  }
	  else if ((tm->tm_hour)  == 12){
	  	sprintf(buffer,"%02d/%02d/%d %02d:%02d pm", tm->tm_mday , tm->tm_mon + 1, tm->tm_year+ 1900, tm->tm_hour, tm->tm_min);
	  	//printf("%02d/%02d/%d %02d:%02d pm", tm->tm_mday , tm->tm_mon + 1, tm->tm_year+ 1900, tm->tm_hour, tm->tm_min);
	  }
	  else{
	  	sprintf(buffer,"%02d/%02d/%d %02d:%02d pm", tm->tm_mday , tm->tm_mon + 1, tm->tm_year+ 1900, (tm->tm_hour - 12), tm->tm_min);
	 	//printf("%02d/%02d/%d %02d:%02d pm", tm->tm_mday , tm->tm_mon + 1, tm->tm_year+ 1900, (tm->tm_hour - 12), tm->tm_min);
	  }
	return buffer;
}


int add_details()
{
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

//EMP *head;

*/
	EMP e;
	
	FILE *fp;
	
	printf("\nEnter the Emp Id\n");
	scanf("%s",&e.empId);
	//printf("Entered EmpId is %s",e.empId);
	
	printf("\nEnter the Emp name\n");
	getchar();
	scanf("%[^\n]s",&e.name);
	
	printf("\nEnter the Email Id\n");
	scanf("%s",&e.emailId);
	
	printf("\nEnter the band\n");
	scanf("%s",&e.band);
	
	printf("\nEnter the Emp DOJ\n");
	scanf("%s",&e.doj);
	
	printf("\nEnter the Emp Phone number\n");
	scanf("%s",&e.phoneNo);
	
		
	printf("\nEnter the Reporting manager\n");
	getchar();
	scanf("%[^\n]s",&e.reportingManager);

	
	
	//scanf("%s",&e.reporteeNameId);
	
	printf("\nEnter the Tech.Area \n");
	scanf("%s",&e.techArea);
	
	printf("\nEnter the Project Info\n");
	getchar();
	scanf("%[^\n]s",&e.projectInfo);
	
	//printf("\nEnter the status\n");
	//scanf("%s",&e.status);
	
	//strcpy(&e.created_date,timestamp());
	strcpy(&e.status,"Active");
	strcpy(&e.releaving_date,"_");

	
	char repo;
	char reporteeNameId[max_size]="";
	char new_reportee[max_size];
	printf("\nYou have any reportees working under you (Y/N)\n");
	scanf(" %c",&repo);
	
	if(repo == 'Y')
	{
		int total_repo;
		printf("\nEnter total no of reportees.\n");
		scanf("%d",&total_repo);
		
		for(int i=0;i<total_repo;i++)
		{
			
			printf("\nEnter the Reportee name and Id \n");
			getchar();
			scanf("%[^\n]s",&new_reportee);
			strcat(new_reportee,"-");
			strcat(reporteeNameId,new_reportee);
		}
		reporteeNameId[strlen(total_repo)-1] = '\0';
	}	
	else 
	{
		strcat(reporteeNameId,"NA");
	}
	
	
	fp = fopen("TSIndia_Emp_DB1.xlsx","a");
	printf("File is opened for adding info...");
	
	strcpy(&e.created_date,timestamp());
	printf("After time created.");	fprintf(fp,"%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\n",e.empId,e.name,e.emailId,e.band,e.doj,e.phoneNo,e.created_date,e.reportingManager,reporteeNameId,e.techArea,e.projectInfo,e.status,e.releaving_date);
	
	fclose(fp);
	return 0;	
}
