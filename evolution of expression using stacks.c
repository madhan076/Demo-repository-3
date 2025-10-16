#include<stdio.h>
int top=-1;
int stack[50];
void push(int);
int pop;
void eval(char str[],int num[]);
int main()
{
	char str[20];
	int num[20],i;
	printf("enter postfix expression:");
	scanf("%s",str);
	i=0;
	while(str[i]!='\0')
	{
		if(isalpha(str[i]))
		{
			printf("enter value for %c:",str[i]);
			scanf("%d",&num[i]);
		}
		i++;
	}
eval(str,num);
return 0;
}
void eval(char str[],int num[])
{
  int i=0;
  int op1,op2;
  char ch;
  while(str[i]!='\0')
  {
  	ch=str[i];
  	if(isaplha(str[i]))
  	push(num[i]);
  	else
  	{
  		op2=pop();
  		op1=pop();
  		switch(ch)
  		{
  		   case '+';
			 push(op1+op2);
			 break;
		   case  '-';
		      pop(op1-op2);
			  break;
		   case '*';
		      pop(op1*op2);
			  break;
		   case '/';
		      pop(op1/op2);
			  break;	 	
		}
	}
	i++;
  }	
  f=pop();
  printf("The value is:%d",f);
}
void push(int ele)
{
	top++;
	stack[top]=ele;
}
int pop()
{
	int ele;
	ele=stack[top];
	top--;
	return ele;
}
