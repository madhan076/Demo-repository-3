#include<stdio.h>
#include<stdlib.h>
#define size 20
int top=-1,stack[size],ch,ele,i;
void push();
void pop();
void display();
main()
{
	printf("\n\t\t MAIN MENU");
	printf("\n\t\t 1.PUSH");
	printf("\n\t\t 2.POP");
	printf("\n\t\t 3.DISPLAY");
	printf("\n\t\t 4.EXIT\n");
	do
	{
		printf("Enter your choice:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1: push();
			break;
			case 2: pop();
			break;
			case 3: display();
			break;
			case 4: exit(0);
		}
	}while (ch<=4);
}
void push()
{
	if(top==(size-1))
	{
		printf("STACK IS FULL\n");
	}
	else 
	{
		printf("Enter the element:");
		scanf("%d",&ele);
		top++;
		stack[top]=ele;
	}
}
void pop()
{
	if(top==-1)
	{
		printf("STACK IS EMPTY\n");
	}
	else
	{
	   ele=stack[top];
	   printf("Deleted element is:%d\n",ele);
	   top--;
	}
}
void display()
{
	if(top==-1)
	{
		printf("STACK IS EMPTY\n");	
	}
	else
	{
		for(i=top;i>=0;i--)
		printf("\t\t%d\n",stack[i]);
	}
}

