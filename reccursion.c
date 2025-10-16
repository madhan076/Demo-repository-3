#include<stdio.h>
void fun(int a)
{
	if((a*3)-1>36) return;
	fun(a+3);
	printf("%d",a*3);
	fun(a+1);
}
int main()
{
	fun(1);
}
