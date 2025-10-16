#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct student{
	char name[10];
	int s1,s2,s3,s4,s5;
};
int main(int argc,char*argv[])
{
	struct student m;
	int total;
	strcpy(m.name,argv[1]);
	m.s1=atoi(argv[2]);
	m.s2=atoi(argv[3]);
	m.s3=atoi(argv[4]);
	m.s4=atoi(argv[5]);
	m.s5=atoi(argv[6]);
	total=m.s1+m.s2+m.s3+m.s4+m.s5;
	printf("NAME\tBEEE\tDEVC\tMATHS\tPHY\tCHE\n");
	printf("%s\t%d\t%d\t%d\t%d\t%d\nTOTAL=%d",m.name,m.s1,m.s2,m.s3,m.s4,m.s5,total);
	return 0;
}
