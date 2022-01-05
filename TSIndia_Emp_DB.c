#include "header.h"

EMP *head=NULL,*last=NULL;

void list_display()
{
	char r[max_size]; 
	printf("\n\n\t\tEnter The ID You Want To Search: ");
    	scanf("%s",r);
	EMP *temp = head;
	if(temp == NULL)
	{
		printf("memory is not allocated");
		return ;
	}
	else
	{

		while(temp != NULL)
		{
		printf("in while");
		int res = strcmp(temp->empId,r);
		printf("%d\n",res);
			if(res == 9)
			{
			printf("linked %s %s %s \n",temp->empId,temp->name,temp->emailId);
			
			}
			temp= temp->next;
		}
	}
	return ;
}

void read_DB()
{
	printf("in database file");
	FILE *fp;
	fp = fopen("TSIndia_Emp_DB1.xlsx","r");
	EMP emp;
	
	while(fread(&emp,sizeof(emp),1,fp))
	{
		printf("We are in while");
		EMP *new = NULL;
		new =(EMP*) malloc(sizeof(emp));
		#if 0
    		strcpy(new->empId,emp.empId);
    		strcpy(new->name,emp.name);
    		strcpy(new->emailId,emp.emailId);
    		strcpy(new->band,emp.band);
    		strcpy(new->doj,emp.doj);
    		strcpy(new->phoneNo,emp.phoneNo);
    		strcpy(new->reportingManager,emp.reportingManager);
    		strcpy(new->reporteeNameId,emp.reporteeNameId);
    		strcpy(new->techArea,emp.techArea);
    		strcpy(new->projectInfo,emp.projectInfo);
    		strcpy(new->status,emp.status);
    		strcpy(new->releaving_date,emp.releaving_date);
    		//printf();
    		#endif
    		new = &emp;
    		
    		//printf("list valies are:%s %s %s",new->empId,new->name,new->emailId);
    		
    		new->next = NULL; 
    		
    		if(head == NULL)
    		{
    			head = new;
    			last = new;	
    			
    		}	
    		else
    		{
    			last->next = new;
    			last = new;
    			
    		}
	}
	
	fclose(fp);
	
	list_display();

	//free(new);
	return ;	
}





