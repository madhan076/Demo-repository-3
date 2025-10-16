#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *arr=malloc(4*sizeof(int));
	arr[0]=1;
	arr[1]=3;
	arr[2]=4;
	arr[3]=5;
	arr = realloc(arr,6*sizeof(int));
	arr[4]=8;
	arr[5]=0;
	int i;
	for(i=0;i<6;i++)
	{
		printf("%d ",arr[i]);
	}
	free(arr);
}
