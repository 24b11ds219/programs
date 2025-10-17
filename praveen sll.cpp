#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node*next;
}*head=NULL;
void create()
{
	struct node*newnode,*ptr;
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("enter the data:");
	scanf("%d",&newnode->data);
	newnode->next=NULL;
	if(head==NULL)
	{
		head=newnode;
	}
	else{
		ptr=head;
		while(ptr->next!=NULL)
		{
			ptr=ptr->next;
		}
		ptr->next=newnode;
	}
}
void insert_at_begin()
{
		struct node*newnode,*ptr;
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("enter the data:");
	scanf("%d",&newnode->data);
	newnode->next=NULL;
	if(head==NULL)
	{
		head=newnode;
	}
	else
	{
		newnode->next=head;
		head=newnode;
	}
}
void insert_at_end()
{
	create();
}
void delete_at_begin()
{
	struct node*temp;
	if(head==NULL)
	{
		printf("list is empty:");
	}
	else
	{
		temp=head;
		head=head->next;
		free(temp);
	}
}
void delete_at_end()
{
	struct node*ptr,*temp;
	if(head==NULL)
	{
		printf("list is empty:");
	}
	else
	{
		temp=head;
		while(temp->next->next!=NULL)
		{
			temp=temp->next;
		}
		ptr=temp->next;
		temp->next=NULL;
		free(ptr);
	}
}
void display()
{
	struct node*ptr;
	if(head==NULL)
	{
		printf("list is empty:");
	}
	else
	{
		ptr=head;
		while(ptr!=NULL)
		{
			printf("%d->",ptr->data);
			ptr=ptr->next;
		}
		printf("NULL:");
	}
}
int main()
{
	int ch;
	do
	{
		printf("1.create\n,2.insert _at_begin\n,3.insert_at_end\n,4.delete_at_begin\n,5.delete_at_end\n6.display\n");
		printf("enter your choice:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:create();
			break;
			case 2:insert_at_begin();break;
			case 3:insert_at_end();break;
			case 4:delete_at_begin();break;
			case 5:delete_at_end();break;
			case 6:display();break;
		}
	}while(1);
}



