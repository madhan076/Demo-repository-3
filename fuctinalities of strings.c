#include<stdio.h>
#include<string.h>
int main()
{
	char arr[10];
	scanf("%[^\n]s",arr);
	int length= strlen(arr);
	printf("%d",length);
}

