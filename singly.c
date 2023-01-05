#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
void insertf();
void insertlast();
void insertloc();
void begdelete();
void enddelete();
void randomdelete();
void display();
struct node
{
int data;
struct node *next;
};
struct node *head=NULL;

void insertf()
{
struct node *newnode;
newnode=(struct node*)malloc(sizeof(struct node *));
if(newnode==NULL)
{
printf("no space");
}
else
{
printf("enter the data into newnode \n");
scanf("%d",&newnode->data);
newnode->next=NULL;
if(head==NULL)
head=newnode;
else

{
newnode->next=head;
head=newnode;
}
printf("element inserted successfully \n ");
}
}
void insertlast()
{
struct node *temp,*newnode;
newnode=(struct node*)malloc(sizeof(struct node *));
if(newnode==NULL)
printf("no space available");
else
{
temp=head;
printf("enter the data in the newnode\n");
scanf("%d",&newnode->data);
while(temp->next!=NULL)
{
temp=temp->next;
}
temp->next=newnode;
printf("inserted successfully\n");
}
}
void insertloc()
{
int key;
struct node *temp,*newnode;
newnode=(struct node *)malloc(sizeof(struct node *));
if(newnode==NULL)
printf("no space available \n");
else
{
printf("enter the key\n");
scanf("%d",&key);
printf("enter the data\n");
scanf("%d",&newnode->data);
newnode->next=NULL;
temp=head;
while(temp->data!=key)
temp=temp->next;
if(temp->data==key)
{
newnode->next=temp->next;
temp->next=newnode;
}
}
}
void display()
{
struct node *temp;
if(head==NULL)
printf("the list is empty nothing to display\n");
else
{
temp=head;
printf("%d\n",temp->data);
while(temp->next!=NULL)
{
temp=temp->next;
printf("%d\n",temp->data);
}
}
}
void begdelete()
{
struct node *temp;
if(head==NULL)
printf("underflow\n");
else
{
temp=head;
head=temp->next;
free(temp);
printf("deleted successfully\n");
}
}
void enddelete()
{
struct node *temp,*p;
temp=head;
if(head==NULL)
printf("the list is empty\n");
else
{
while(temp->next!=NULL)
{
p=temp;
temp=temp->next;
}
if(temp->next==NULL)
{
p->next=NULL;
free(temp);
}
}
}
void randomdelete()
{
struct node *temp,*p;
int key;
printf("enter the data in the linked list which is to be deleted\n");
scanf("%d",&key);
temp=head;
while(temp->next!=NULL)
{
p=temp;
temp=temp->next;
if(temp==NULL)
{
printf("the list is empty\n");
}
else
{
if(head->data==key)
{
begdelete();
}
}
if(temp->data==key)
{
p->next=temp->next;
free(temp);
}
}
}

void main()
{
int choice;
printf("singly linked list\n");
printf("1.insert beginning\n 2.insert last\n 3.insert random\n 4.display\n 5.delete at beginning\n 6.delete at end\n 7.delete random\n"); 
do
{
printf("enter your choice\n");
scanf("%d",&choice);
switch(choice)
{
case 1:
insertf();
break;
case 2:
insertlast();
break;
case 3:
insertloc();
break;
case 4:
display();
break;
case 5:
begdelete();
break;
case 6:
enddelete();
break;
case 7:
randomdelete();
break;
case 8:
exit(0);
break;
default:printf("invalid choice");
}
}
while(choice!=8);
}

