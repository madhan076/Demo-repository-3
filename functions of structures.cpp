#include<stdio.h>
struct student{
	int no;
	int marks;
}s;
void display(int x,int y)
{
	("%d %d",x,y);
}
main()
{
	s.no=10;
	s.marks=20;
	display(s.no,s.marks);
}
