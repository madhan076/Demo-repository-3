#include<stdio.h>
#include<stdlib.h>
#define NODE struct node
NODE
{
	int n;
	NODE *next;
};
NODE *front='\0',*rear='\0',*p;
void main()
{
	int ch;
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
 push()
{
	p=(NODE*)malloc(sizeof(NODE));
	printf("Enter the node data:");
	scanf("%d",&p->n);
	if(front=='\0')
	{
		p->next='\0';
		front=p;
		rear=p;
	}
	else
	{
		rear->next=p;
		p->next='\0';
		rear=p;
	}
}
 pop()
{
	if(front=='\0')
	printf("Queue is empty");
	else
	{
		p=front;
		printf("\nDeleted element is:%d\n",p->n);
		front=front->next;
		free(p);
	}
}
display()
{
	if(front=='\0')
	printf("\nQueue is empty");
	else
	{
		for(p=front;p!='\0';p=p->next)
		printf("%d->",p->n);
		printf("NULL\n");
	}
}
