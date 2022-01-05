#include<stdio.h>
#include<stdlib.h>


int main()
{

	FILE *r = fopen("TSIndia_Emp_DB1.xlsx","r");
	
	char id[100];
	char name[100];
	char C[100][100];
	C = textscan(r,"%s\t%s,id,name);
	//printf("%s %s",id,name);
	celldisp(C);
	fclose(r);
	return 0;
}
