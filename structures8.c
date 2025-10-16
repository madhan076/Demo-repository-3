#include<stdio.h>
struct dob
{
	int dd;
	int mm;
	int yyyy;
}d;
struct student
{
    int rollno;
	char *NAME;
	struct dob d;
}s1;
int main()
{
	s1.rollno=1234;
	s1.NAME="abcd";
	s1.d.dd=7;
	s1.d.mm=5;
	s1.d.yyyy=2006;
	printf("Roll No:%d\n",s1.rollno);
	printf("Name:%s\n",s1.NAME);
	printf("dob:%d/%d/%d",s1.d.dd,s1.d.mm,s1.d.yyyy);

	return 0;
}
