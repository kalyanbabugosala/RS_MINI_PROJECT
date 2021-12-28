#include <stdio.h>
#include <stdlib.h>
//#include <string.h>
//#include <header.h>

int main(){
	char id[20] ;
 	char name[20];
	FILE *fp = fopen("sample_write_xlsx.xlsx","r");
	
	while(fscanf(fp,"%s\t%s",id,name)!=EOF)
	{
		fprintf(stdout,"%s\t%s\n",id,name);
	}
	
	fclose(fp);
	return 0;
}


/*
#include<stdio.h>
#include<stdlib.h>
struct Employee{
char code[4];
char delim;
char name[10];
};


void main()
{
struct Employee e,e1;
FILE *fp;
printf("Enter the code:");
scanf("%s",e.code);
printf("Enter the name:");
scanf("%s",e.name);
e.delim='\t';
fp=fopen("new.doc","w");

fwrite(&e,sizeof(struct Employee),1,fp);
printf("\n");
fclose(fp);

fp=fopen("new.doc","r");
while(fread(&e1,sizeof(struct Employee),1,fp))
{
printf("%s",e1.code);
if(e1.delim=='\t')
printf(":");
printf("%s",e1.name);

}
printf("\n");
}
*/


/*
int main(void)

{

FILE * fp;

int countrycode[300];

char countryname[300];

fp=fopen("xyz.xls", "r");

if(!fp)

{

printf("File failed to open!\n");

exit(1);

}

fscanf(fp,"%s%d",&countryname,countrycode);

fclose(fp);

fprintf(stdout,"First Line is %s%d\n",countryname, countrycode);

return 0;

}
*/
