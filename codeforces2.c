#include<stdio.h>
int main()
{
	int x;
	scanf("%d",&x);
	int digit;
	int i,min=9;
	for(i=x;i>=1;i/=10)
	{
		digit=i%10;
		if(min>digit)
		{
			min=digit;
		}
	}
	printf("%d",min);
}
