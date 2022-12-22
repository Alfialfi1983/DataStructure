#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
void push();
void pop();
void display();
struct node
{
int data;
struct node *next;
};
struct node *head=NULL;             

void push()
{
struct node *newnode;
newnode=(struct node*)malloc(sizeof(struct node *));
if(newnode==NULL)
{
printf("insertion not possible");                                 //insert beg
}
else
printf("enter the data in to newnode\n");
scanf("%d",&newnode->data);
newnode->next=NULL;
if(head==NULL)
head=newnode;
else
{
newnode->next=head;
head=newnode;
}
printf("element inserted successfully\n");
}
void pop()
{
struct node *temp;
if(head==NULL)
printf("underflow\n");
else
{
temp=head;
head=temp->next;
free(temp);
}
printf("deleted successfully\n");
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
}}
}


int main()
{
int choice;
printf("stack using singly linked list\n");

printf("1.push\n2.pop\n 3.display\n");
do
{
printf("enter the choice\n");
scanf("%d",&choice);
switch(choice)
{
case 1:
push();
break;
case 2:
pop();
break;
case 3:
display();
break;
case 4:
exit(0);
break;
default:
printf("invalid choice");
}
}while(choice!=4);
}



