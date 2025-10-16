#include<stdio.h>
struct info{
	int age;
	char name[10];
};
int main()
{
	struct info obj[10];
	int i;
	for(i=0;i<2;i++)
	{
		scanf("%d",&obj[i].age);
		scanf("%s",obj[i].name);
	}
	for(i=0;i<2;i++)
	{
		printf("%d %s",obj[i].name,obj[i].age);
	}
}
