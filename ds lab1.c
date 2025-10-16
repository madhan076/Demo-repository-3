#include<stdio.h>
struct student
{
	char name[50];
	int marks;
};
int main()
{
	int n,i;
	printf("Enter the number of students:");
	scanf("%d",&n);
	struct student s[n];
	for(i=0;i<n;i++)
	{
		printf("Enter the name of student %d:",i+1);
		scanf("%s",s[i].name);
		printf("Enter the marks for %s:",s[i].name);
		scanf("%d",&s[i].marks);
	}
	int total=0;
	for(i=0;i<n;i++)
	{
		total+=s[i].marks;
	}
	float average=(float)total/n;
	printf("\n Total marks:%d\n",total);
	printf("Average marks:%.2f\n",average);
}
