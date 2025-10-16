#include<stdio.h>
float avg(int arr[])
{ 
    int i,n,s,result=0,ans;
    for(i=0;i<s;i++)
    {
    	result = result+arr[i];
	}
	  ans = result/n;
	  return ans;
}
   
int main()
{
	int n,i;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	int x=avg(arr);
	printf("%f",x);
}
