#include<stdio.h>
void fun(int a)
{
	if((a)-1>36);
	fun(a+3);
	printf("%d",a);
	fun(a+1);
}
int main()
{
	fun(1);
}
