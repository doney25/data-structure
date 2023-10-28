#include<stdio.h>
int a[50],max,top=-1;
void push();
void display();
void pop();
void peek();
void main()
{
printf("Enter the max size of the stack:");
scanf("%d",&max);
int choice;	
	do{
	   printf("Enter the choice:\n1.Push\t2.Pop\t3.Peek\t4.Display\t5.EXIT\n");
	   scanf("%d",&choice);
switch(choice){
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
 	peek();
 	break;
 	}
 case 4:
 	{
 	display();
 	break;
 	}
 default:
 	{
 	printf("Invalid input");	
 	break;			
 	}
	}
	







}
 while(choice!=5);
 }
 	void push()
 	{
 	 int value;
 	 if(top>=max-1)
 	 {
 	  printf("OVERFLOW\n");
 	 }
 	 else
 	  {
 	   printf("Enter the value to be pushed\n");
 	   scanf("%d",&value);
 	   top++;
 	   a[top]=value;
 	   }
 	  }
 	  void pop()
 	  {
 	   int item;
 	   if(top==-1)
 	    {
 	     printf("UNDERFLOW\n");
 	    }
 	    else
 	    {
 	    item=a[top];
 	    printf("The popped element is %d\n",item);
 	    top--;
 	   }
 	  }
 	  void peek()
 	  {
 	  if(top==-1)
 	  {
 	  printf("The stack is empty\n");
 	  }
 	  else
 	  {
	   printf("The top most element is %d\n",a[top]);
	  }
	  }
	  void display()
	






  {
	  int i;
	if(top==-1)
 	  {
 	  printf("The stack is empty\n");
 	  }
	  else
	  {
	  printf("The Stack is ");
	  for(i=top;i>=0;i--)
	  {
	   printf("%d ",a[i]);
	  }
	  printf("\n");
	  }
	  }
