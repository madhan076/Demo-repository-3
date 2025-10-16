#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *arr= malloc(4*sizeof(int));
	arr[0]=10;
	arr[1]=20;
	arr[2]=30;
	arr[3]=40;
	arr = realloc(arr,6*sizeof(int));
	arr[4]=100;
	arr[5]=130;
	int i;
	for(i=0;i<6;i++)
	{
		printf("%d ",arr[i]);
	}
	free(arr);
}
