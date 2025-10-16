#include<stdio.h>
void printTable(int data)
{
	int i;
	for(i=1;i<11;i++)
	{
		printf("%d x %d = %d\n",data,i,data*i);
	}
}
int main()
{
	int data;
	scanf("%d",&data);
	printTable(data);
}
