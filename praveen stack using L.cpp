#include<stdio.h>
#include<stdlib.h>
#define max 5
int size=0;
struct node
{
int data;
struct node*next;	
}*top=NULL;
void push()
{
	if(max==size){
		printf("list is full:");
	}
	else
	{
	struct node*newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("enter the data:");
	scanf("%d",&newnode->data);
	newnode->next=top;
	top=newnode;
	size++;
}
}
void pop()
{
	struct node*newnode;
	if(top==NULL&&size==0)
	{
		printf("list is empty:");
	}
	else
	{
		newnode=top;
	printf("%d is poped",newnode->data);
	top=newnode->next;
	free(newnode);
	size--;	
	}	
}
void peek()
{
	struct node*newnode;
	newnode=top;
	if(top==NULL&&size==0)
	{
		printf("list is empty:");
	}
	else
	{
		printf("%d\n",top->data);
	}
}
void display()
{
	struct node*temp;
	if(top==NULL&&size==0)
	{
		printf("list is empty:");
	}
	else
	{
	temp=top;
	while(temp!=NULL)
	{
		printf("%d\n",temp->data);
		temp=temp->next;
}
}
}
void isfull()
{
	if(max==size)
	{
		printf("list is full:");
	}
	else
	{
		printf("list is not full:");
	}
}
void isempty()
{
	if(top==NULL&&size==0)
	{
		printf("list is empty:");
	}
	else
	{
		printf("list is not empty:");
	}
}
int main()
{
	int ch;
	do
	{
		printf("\n1.push\n,2.pop\n,3.peek\n,4.display\n,5.is full\n,6.is empty\n:");
		printf("enter your choice:");
		scanf("%d",&ch);
	switch(ch)
	{
		case 1:push();break;
		case 2:pop();break;
		case 3:peek();break;
		case 4:display();break;
		case 5:isfull();break;
		case 6:isempty();break;
		case 7:exit(0);
	}
}while(1);
}



