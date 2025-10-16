#include<stdio.h>
struct parentsdetails
{
	char fathername[20];
	int fatherage;
};
struct studentdetails
{
	char name[20];
	char rollnumber[20];
	int age;
	struct parentsdetails info;
};
int main()
{
	struct studentdetails obj;
	scanf("%s",obj.name);
	scanf("%s",obj.rollnumber);
	scanf("%d",&obj.age);
	scanf("%s",obj.info.fathername);
	scanf("%d",obj.info.fatherage);
	printf("%s\n",obj.name);
	printf("%s\n",obj.rollnumber);
	printf("%d\n",&obj.age);
	printf("%s\n",obj.info.fathername);
	printf("%d",obj.info.fatherage);
}

