#include<stdio.h>
struct student
{
	int marks;
	char name[50];
};
int main()
{
	int n,i;
	printf("Enter the number of students:");
	scanf("%d",&n);
	struct student s[n];
	for (i=0;i<n;i++)
	{
		printf("Enter the name of the student:",s[i].name);
		scanf("%s",s[i].name);
		printf("Enter the marks:",i+1);
		scanf("%d",&s[i].marks);
	}
	int total=0;
	for(i=0;i<n;i++)
	{
		total+= s[i].marks;
	}
	float average = (float)total/n;
	printf("\nTotal marks:%d\n",total);
	printf("Average marks:%.2f",average);
}
