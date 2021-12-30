#ifndef headers
#define headers
#define max_size 1000
// Inner structure for Reportee information.
/*struct Reportee
{
	unsigned char *reporteeId;
	char *reporteeName;
};*/


// Structure for Employee details.
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
	//char reporteeNameId[max_size]="";

	
	
	
}EMP;

//EMP *head;



int add();
int add_details();


int view();
int view_details();

int modify();
int deleteEmp();



//bool empId_present_or_not(unsigned int empId);

#endif











