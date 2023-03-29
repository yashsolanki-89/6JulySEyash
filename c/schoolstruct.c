#include<stdio.h>
struct studentinfo{
	char name[20];
	int roll;
	int mark1;
	int mark2;
	int mark3;
};
MarksTotal(int a,int b,int c)
{
	return a+b+c;
}
int main()
{
	struct studentinfo p1; 
      FILE *studentFile;
      int total;
	
	printf("Enter a name :\n");
	scanf("%s",&p1.name);
	
	printf("Enter a roll-no :\n");
	scanf("%d",&p1.roll);
	
	printf("Enter a marks of maths : \n");
    scanf("%d",&p1.mark1); 
    
    printf("Enter a marks of science :\n");
    scanf("%d",&p1.mark2);
    
    printf("Enter a marks of english :\n");
    scanf("%d",&p1.mark3);
     
	 total=MarksTotal(p1.mark1,p1.mark2,p1.mark3); 	
    studentFile=fopen("studentfile.txt","w");
	fprintf(studentFile,"%s",p1.name );
	fprintf(studentFile,"%d",p1.roll );
	fprintf(studentFile,"%d",total  );
	fclose(studentFile);
    
    printf(" added into TextFile..!");
	return 0;
}
