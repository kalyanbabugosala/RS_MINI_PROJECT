/*
	Header File
*/


#ifndef  headers 		// Maintains Single Copy 

#define headers

	void add(); 		// add data to excel sheet
	void modify();		// modify data and update from excel sheet
	void view();		// display the data from excel sheet
	void delete();		// delete data from excel sheet

	int flag=0;
	//extern int start_file=1;
	// if employee having any reportees
	typedef struct reporteee{
		const char *ID;
		unsigned char *NAME;
		//struct reporteee *next;
	}Reportee;

	// Employee Data Strucutre
	typedef struct employee_data{

		//const int ID;
		const char *ID;
		unsigned char *NAME;
		const unsigned char *EMAIL;
		unsigned char *BAND;
		const unsigned char *DATE;
		unsigned char *MOBILE;
		unsigned char *MANAGER;
		Reportee reportees[5];	// nested struct
		
		//unsigned char *Reportees; // nested struct
		
		unsigned char *TechArea;
		unsigned char *Project;
		struct employee_data *link;
	}EMP;
	//EMP *head_node;	// global

#endif
