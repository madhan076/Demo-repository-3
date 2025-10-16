#include<stdio.h>
int main()
{
	int a;
	printf("no of letters:");
	scanf("%d",&a);
	char ch[a];
	int i;
	for(i=0;i<a;i++)
	{
		scanf("%c",ch[i]);
	}
	for(i=0;i<a;i++)
	{
		printf("%c",ch[i]);
	}
}
