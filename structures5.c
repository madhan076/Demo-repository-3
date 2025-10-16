#include<stdio.h>
struct Details
{
	char name[1000];
	char rollno[10];
	int age;
	char gender[10];
};
int main()
{
	int n,i;
	scanf("%d",&n);
	struct Details obj[n];
	for(i=0;i<n;i++)
	{
		scanf("%s",obj[i].name);
		scanf("%s",obj[i].rollno);
		scanf("%d",&obj[i].age);
		scanf("%s",obj[i].gender);
	}
	for(i=0;i<n;i++)
	{
		printf("%s\n",obj[i].name);
		printf("%s\n",obj[i].rollno);
		printf("%d\n",obj[i].age);
		printf("%s\n",obj[i].gender);
	}
	int c;
	scanf("%d",&c);
	scanf("%s",obj[c-1].name);
	scanf("%s",obj[c-1].rollno);
	scanf("%d",&obj[c-1].age);
	scanf("%s",obj[c-1].gender);
	for(i=0;i<n;i++)
	{
      	printf("%s\n",obj[i].name);
        printf("%s\n",obj[i].rollno);
        printf("%d\n",obj[i].age);
        printf("%s\n",obj[i].gender);	

	}
}
