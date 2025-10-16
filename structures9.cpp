#include<stdio.h>
struct student
{
	char name[100];
	float marks;
};
int main()
{
	int i,n;
	printf("Enter the number of students:");
	scanf("%d",&n);
	struct student s[n];
	for(i=0;i<n;i++){
		printf("Enter the name of students %d:",i+1);
		scanf("%s",&s[i].name);
		printf("Enter the marks of students:",s[i].name);
		scanf("%d",&s[i].marks);
	}
	int total = 0;
	for(i=0;i<n;i++){
		total+=s[i].marks;
	}
	float average = float(total)/n;
	printf("\nTotal marks:%d\n",total );
	printf("Average marks:%.2f\n",average);}
