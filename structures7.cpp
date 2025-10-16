#include<stdio.h>
struct student{
	int rollno;
	char *NAME;
	float CGPA;
};
int main()
{
	struct student s1;
	s1.rollno=1234;
	s1.NAME="MADHAN";
	s1.CGPA=9.8;
	printf("Roll No:%d\n",s1.rollno);
	printf("Name:%s\n",s1.NAME);
	printf("CGPA:%f",s1.CGPA);
	return 0;
}
