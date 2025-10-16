#include<stdio.h>
#include<string.h>
int main()
{
	char s1[10],s2[20];
	scanf("%s",s1);
	scanf("%s",s2);
	int L1=strlen(s1);
	int L2=strlen(s2);
    if(L1>L2)
    {
    	strcat(s1,s2);
    	printf("%s",s1);
	}
	else 
	{
		strcat(s2,s1);
		printf("%s",s2);
	}
	
}
