#include<stdio.h>
struct class
{
	int no;
	char name[20];
	float marks;
};
int main()
{
	int x;
	struct class stu1 = {111, "Rao", 67.80};
	struct class stu2 = {222; "Reddy", 67.80};
	struct class stu3;
	stu3 = stu2;
	x=((stu3.no == stu2.no) && (stu3.marks == stu2.marks))? 1:0;
	if (x==1)
	{
		printf ("student 3 and student 2 details are same \n");
		printf("%d\t%s\t%f",stu3.no,stu3.name,stu3.marks);
	}
	else 
	{
		printf("student 3 and students 2 details are not same");
	}
}
