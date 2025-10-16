#include<stdio.h>
#include<string.h>
int main()
{
	char s1[10],s2[20];
	scanf("%s",s1);
	scanf("%s",s2);
	strcpy(s1,s2);
	printf("%s",s1);
}
