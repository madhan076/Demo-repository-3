#include<stdlib.h>
#include<stdlib.h>
#define NODE struct node
NODE
{
	int n;
	NODE *next;
};
NODE *p,*q,*head='/0';
int main()
{
	int no,i,ch;
	printf("enter no.of node:");
	scanf("%d",&no);
	for(i=1;i<=no;i++)
	{
		p=(NODE*)malloc(sizeof(NODE));
		printf("ENTER THE NODE DATA");
		scanf("%d",&p->n);
		p->next='\0';
		if(head=='\0')
		{
			head=p;
			q=p;
		}
		else
		{
		   q->next=p;
		   q=p;
		}
	}
	display();
	do
	{
		printf("n\t\t MAINMENU");
		printf("n\t\t 1.INSERTBEG");
		printf("n\t\t 2.INSERTPOS");
		printf("n\t\t 3.INSERTEND");
		printf("n\t\t 4.DELETIONBEG");
		printf("n\t\t 5.DELETIONPOS");
		printf("n\t\t 6.DELETIONEND");
		printf("n\t\t 7.EXIT");
		printf("\n enter ur choice:");
		scanf("%d",&ch);
		switch(ch)
		{
			case1: insertbeg();
			break;
			case2: insertpos();
			break;
			case3: insertend();
			break;
			case4: deletebeg();
			break;
			case5: deletepos();
			break;
			case6: deleteend();
			break;
			case7: exit(0);
		}
	}
	while(ch<=7);
}
display()
{
	if(head=='\0')
	printf("Linked list is empty");
	else
	{
		printf("\nList is:\n");
		q=head;
		while(q!=\'0')
		{
			printf("%d->",q->n);
			q=q->next;
		}
		printf("NULL");
	}
}
insertbeg()
{
	printf("\nInserting at the beginning:");
	p=(NODE*)malloc(sizeof(NODE));
	printf("\nenter node data:");
	scanf("%d",&p->n);
	p->next=head;
	head=p;
	display();
}
insertpos()
{
	int pos,i;
	printf("\nInserting at any position:");
	p=(NODE*)malloc(sizeof(NODE));
	printf("\nenter node data:");
	scanf("%d",&p->n);
	printf("enter position:");
	scanf("%d",&pos);
	q=head;
	for(i=1;i<pos-1;i++)
	{
	q=q->next;
	}
	p->next=q->next;
	q->next=p;
	display();
}
insertend()
{
	printf("\nInserting at the end:");
	p=(NODE)malloc(sizeof(NODE));
	printf("\nEnter node data:");
	scanf("%d",&p->n);
	q=head;
	while(q->next!='\0')
	{
		q=q->next;
	}
	q->next=p;
	p->next='\0';
	display();
}
deletebeg()
{
	if(head=='\0')
	{
		printf("Linked List is empty");
	}
	else
	{
		printf("/nDeletion at the beginning:");
		p=head;
		head=p->next;
		free(p);
		display();
	}
}
deletepos()
{
	int pos,i;
	if(head=='\0')
	printf("Linked List is empty");
	else
	{
		printf("\n deletion at any position:");
		printf("\n enter node data position:");
		scanf("%d",&pos);
		q=head;
		p=head->next;
		for(i=1;i<pos-1;i++)
		{
			q=q->next;
			p=p->next;
		}
		q->next=p->next;
		free(p);
		display();
	}
}
deletionend()
{
	if(head=='\0')
	printf("\nlinked List is empty");
	else
	{
		printf("\nDeletion at the end:")
		q=head;
		p=head->next;
		while(p->next!='\0')
		{
			
		}
	}
}
