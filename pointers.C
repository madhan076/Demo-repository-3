#include<stdio.h>
int fun(int *ptr,int size)
{   
    int s=0,i;
    for(i=0;i<size;i++)
	{
		s=s+*(ptr+1);
	}
	return s;	
}
int main()
{
    int i,n;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	int c=fun(&arr,n);
	printf("%d",c);
}
