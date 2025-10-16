#include<stdio.h>
struct info {
	char name[10];
	int age;
	char rollnumber[10];
	char gender[10];
};
int main()
{
	int n;
	printf("Enter no.of stduents:");
	scanf("\n%d",&n);
	struct info obj[n];
	int i;
	for(i=0;i<n;i++)
	{
		printf("Enter name:");
		scanf("\n%s",obj[i].name);
		printf("Enetr age:");
		scanf("\n%d",&obj[i].age);
		printf("Enter rollnumber:");
		scanf("\n%s",obj[i].rollnumber);
		printf("Enter gender:");
		scanf("%s",obj[i].gender);
	}
    int m;
    printf("Enter the student position:");
    scanf("%d",&m);
    for(i=0;i<n;i++)
	{
    	if(i==m-1)
		{
    		printf("student name:%s\n",obj[i].name);
    		printf("student age;%d\n",obj[i].age);
    		printf("student rollnumber:%s\n",obj[i].rollnumber);
    		printf("student gender:%s",obj[i].gender);
		}
	}
}
