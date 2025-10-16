#include<stdio.h>
int main()
{
	char Name[10];
	int i;
	scanf("%[^\n]s",Name);
	int ans=0;
	for(i=0;i<10;i++)
	{
		if(Name[i]!= '\0')
		{
			ans = ans+1;
		}
		else{
			break;
		}
	}
	printf("%d",ans);
}
