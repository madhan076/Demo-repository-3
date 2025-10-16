#include<stdio.h>
#include<stdlib.h>
#define MAX 5
int Q[MAX],front=-1,rear=-1;
void enqueue();
void dequeue();
void display();
void enqueue()
{
	if((rear+1)%MAX==front)
	printf("Circular queue is overflow.\n");
	else
	{
		if(front==-1)
		front=rear=0;
		else{
		
		rear=(rear+1)%MAX;
		printf("Enter data to insert:");
		scanf("%d",&Q[rear]);}
	}
}
void dequeue()
{
	if(front==-1)
	printf("Circular queue is overflow.\n");
	else
	{
		printf("%d is removed.\n",Q[front]);
		if(front==rear)
		front=rear-1;
		else
		front=(front+1)%MAX;
	}
}
void display()
{
	if(front==-1)
	printf("Circular queue id empty.\n");
	else
	{
		int i=front;
		while(i!=rear)
		{
			printf("%d\t",Q[i]);
			i=(i+1)%MAX;
		}
		printf("%d\n",Q[i]);
	}
}
int main()
{
	int ch;
	do
	{
		printf("1.ENQUEUE\n2.DEQUEUE\n3.DISPLAY\nEnter your choice:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:enqueue();
			break;
			case 2:dequeue();
			break;
			case 3:display();
			break;
			default:exit(0);
		}
	}while(1);
}
