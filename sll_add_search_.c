#include<stdio.h>
#include<stdlib.h>
typedef struct Student
{
	int roll;
	struct Student *link;
}node;
void Add_first(node **ptr)
{
	node *newnode=NULL;
	newnode=malloc(sizeof(node));
	if(newnode==NULL)
	{
		printf("node not created\n");
	}
	else
	{
		printf("enter the roll\n");
		scanf("%d",&newnode->roll);
		newnode->link=*ptr;
		*ptr=newnode; 
	}
}
void search(node **ptr)
{
	int i=0,d,flag;
	if(*ptr==NULL)
		printf("list is empty\n");
	else
	{
		printf("enter a roll number to search:");
		scanf("%d",&d);
		node *temp=*ptr;
		while(temp!=NULL)
		{
			if(temp->roll==d)
			{
				flag=0;

			}
			else
			{
				flag=1;
			}
			i++;
			temp=temp->link;
		}
		if(flag==1)
		{
			printf("data  not found\n");
		}
		else
		{
			printf("data  found\n");
		}
	}
}
void even_node(node **ptr)
{
	node *temp;
	int cnt=0;
	if(*ptr==NULL)
	{
		printf("list is empty\n");
	}
	temp=*ptr;
	while(temp)
	{
		cnt++;
		if((temp->roll)%2==0)
		{
			printf("postion=%d\tevenvalue=%d\n",cnt,temp->roll);
		}
		temp=temp->link;
	}
}
void Display(node **ptr)
{
	if(*ptr==NULL)
	{
		printf("List is empty\n");
	}
	else
	{
		node *temp=*ptr;
		while(temp)
		{
			printf("%d\n",temp->roll);
			temp=temp->link;
		}
	}
}
int main()
{
	node *head=NULL;
	int choice;
	while(1)
	{
		printf("1.Add_first 2. Display 3.exit 4.serach 5.even_node\n");
		printf("enter ur choice\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:Add_first(&head);
			       break;
			case 2: Display(&head);
				break;
			case 3:exit(0);
			case 4:search(&head);
			       break;
			case 5:even_node(&head);
			       break;
		}
	}
}
