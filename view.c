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
		return 1;
	}
	
	
	return 0;
}


int view_details()
{
	EMP new_node[2];
	const char id[max_size];
	//char reporteeNameId[max_size];
	printf("\nEnter the Emp Id for displaying the details...\n");  
	scanf(" %s",&id);
	//printf("%s %d\n",id,strlen(id));
	
	//printf("Entered id is: %s \n",id);
	FILE *fp;
	
	
	fp = fopen("TSIndia_Emp_DB1.xlsx","r");
	
	
	
	//if 0
	fread(&new_node[2], sizeof(new_node[2]), 1, fp);
	for (int i=0;i<2;i++){
	
		//printf("%s  %d\n",id,strlen(id));
		printf("\n%s",new_node[i].empId);
		
		//if(strcmp(new_node[i].empId,id) == 0 )
		//{
		
		printf("%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s",
		new_node[i].empId,
		new_node[i].name,
		new_node[i].emailId,
		new_node[i].band,
		new_node[i].doj,
		new_node[i].phoneNo,
		new_node[i].created_date,
		new_node[i].reportingManager,
		new_node[i].reporteeNameId,
		new_node[i].techArea,
		new_node[i].projectInfo,
		new_node[i].status,
		new_node[i].releaving_date
		);
		//}
      		printf("\n");
	
	}
	//#endif
	#if 0
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
	#endif
	fclose(fp);
	return 0;
}
