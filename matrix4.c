#include<stdio.h>
int main()
{
	int i,m,j,n,s=0;
	scanf("%d%d",&n,&m);
	int arr[n][m];
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			scanf("%d%d",arr[i][j]);
		}
		s=s+arr[i][j];
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			printf("%d",arr[i][j]);
		}
	}
	printf("\n");
	printf("%d",s);
}
