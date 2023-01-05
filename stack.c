#include<stdio.h>
int stack[100],n,top,ch,i,x;
void push();
void pop();
void display();

int main()
{
top=-1;
printf("enter the size of the stack");
scanf("%d",&n);

printf("\n \tstack operations using array");
printf("\n \t 1.PUSH \n \t 2.POP \n \t 3.DISPLAY \n \t 4.EXIT\n\t");
do
{
printf("enter the choice\n");
scanf("%d",&ch);
switch(ch)
{
case 1:
{
push();
break;
}
case 2:
{
pop();
break;
}
case 3:
{
display();
break;
}
case 4:
{
printf("exit\n");
break;
}
default:
{
printf("invalid choice");
}
}
}
while(ch!=4);
return 0;
}

void push()
{
if(top==n-1)
{
printf("stack is overflow");
}
else
{
printf("enter a value to be pushed\n");
scanf("%d",&x);
top++;
stack[top]=x;
}
}
void pop()
{
if(top==-1)
{
printf("stack is underflow");
}
else
{

x=stack[top];
top--;
printf("deleted elememt is %d \n",x); 
}
}
void display()
{
if (top>=0)
{
printf("\n the elements in the stack\n");
for(i=top;i>=0;i--)
{
printf("\n %d",stack[i]);
}
}
}

