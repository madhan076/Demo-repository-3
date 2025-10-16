#include<stdio.h>
int main()
{ 
	int n;
	scanf("%d",&n);
	int arr[n];
	int i=0,j=0;
	for(i=0;i<n;i++) {
	scanf("%d",&arr[i]);
	}
	for(j=0;j<n-1;j++)
	{
		for(i=0;i<n-1-j;i++)
		{
			if(arr[i]>arr[i+1])
			{
				int temp=arr[i];
				arr[i]=arr[i+1];
				arr[i+1]=temp;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
}
