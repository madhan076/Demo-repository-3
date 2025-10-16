#include<stdio.h>
struct details{
	int age;
	char name[10];
};
int main()
{
	struct details obj;
	scanf("%d",&obj.age);
	scanf("%s",obj.name);
    printf("%d\n",obj.age);
	printf("%s",obj.name);
}
