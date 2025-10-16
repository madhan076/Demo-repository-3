#include<stdio.h>
#include<stdlib.h>
#define size 10
int queue[size],ch,ele,i,front=-1,rear=-1;
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
	if(rear==(size-1))
	{
		printf("Queue is full");
	}
	else
	{
		printf("Enter the element:");
		scanf("%d",&ele);
		if(front==-1)
		{
			front=0;
		}
		rear++;
		queue[rear]=ele;
	}
}
void pop()
{
	if(front==-1||front>rear)
	{
		printf("Queue is empty\n");
	}
	else
	{
		ele=queue[front];
		printf("Deleted element is %d\n",ele);
		front++;
	}
}
void display()
{
	if(front==-1||front>rear)
	{
		printf("Queue is empty\n");
	}
	else
	{
		for(i=front;i<=rear;i++)
		printf("\t\t%d\n",queue[i]);
	}
}
