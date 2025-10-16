#include<stdio.h>
int main()
{
    int s;
    printf("size: ");
    scanf("%d",s);
    int arr[s];
    int i;
    for(i=0;i<s;i++)
    {
    	scanf("%d",&arr[i]);
	}
	int x=0;
	for(i=0;i<s;i++)
	{
		if (x<arr[i])
		{
			x=arr[i];
		}
	printf("%d",x);
	}
}
