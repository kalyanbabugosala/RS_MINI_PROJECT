#ifndef headers
#define headers

	#include<stdlib.h>
	#include<time.h>
	#include<string.h>
	#include<stdio.h>	
	#define max_size 100
	#pragma pack(1)


#if 0
// Inner structure for Reportee information.
/*struct Reportee
{
	unsigned char *reporteeId;
	char *reporteeName;
};*/

#endif
// Structure for Employee details.

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
		char reporteeNameId[max_size];
		char techArea[max_size];
		char projectInfo[max_size];
		char status[max_size];
		char releaving_date[max_size];
		//struct Reportee reportee;
		//char reporteeNameId[max_size];
		struct Employee *next;
}EMP;

//EMP *head=NULL, *last=NULL,*node=NULL;

void read_DB();
void list_display();

int add();
int add_details();


int view();
int view_details();

int modify();
int deleteEmp();



//bool empId_present_or_not(unsigned int empId);

#endif











