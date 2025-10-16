#include<stdio.h>
int main()
{
	int n,count=0;
	printf("the size:");
	scanf("%d",&n);
	int x[n];
	int i;
	for(i=0;i<n;i++)
	{
		scanf("%d",&x[i]);
	    if (x[i]%2==0)
		{
	    	count++;
		}
			
	}
	for(i=0;i<n;i++)
	{
		printf(" %d",x[i]);
	}
	printf("\n%d",count);
}
