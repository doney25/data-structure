#include<stdio.h>
int a[50],max,rear=-1,front=0;
void enqueue();
void display();
void dequeue();
void peek();
void main()
{
printf("Enter the max size of the Queue:");
scanf("%d",&max);
int choice;	
	do{
	   printf("Enter the choice:\n1.Enqueue\t2.Dequeue\t3.Peek\t4.Display\t5.EXIT\n");
	   scanf("%d",&choice);
switch(choice){
 case 1:
 	{
 	enqueue();
 	break;
 	}
 case 2:
 	{
 	dequeue();
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
 	void enqueue()
 	{
 	 int value;
 	 if(rear>=max-1)
 	 {
 	  printf("OVERFLOW\n");
 	 }
 	 else
 	  {
 	   printf("Enter the value to be enqueued\n");
 	   scanf("%d",&value);
 	   rear++;
 	   a[rear]=value;
 	   }
 	  }
 	  void dequeue()
 	  {
 	   int item;
 	   if(rear<front)
 	    {
 	     printf("UNDERFLOW\n");
 	    }
 	    else
 	    {
 	    item=a[front];
 	    
printf("The dequeued element is %d\n",item);
 	    front++;
	 }
 	  }
 	  void peek()
 	  {
 	  if(rear<front)
 	  {
 	  printf("The queue is empty\n");
 	  }
 	  else
 	  {
	   printf("The lower element is %d\n",a[front]);
	  }
	  }
	  void display()
	  {
	  int i;
	  if(front>rear)
 	  {
 	  printf("The queue is empty\n");
 	  }
	  else
	  {
	  printf("The Queue is ");
	  for(i=front;i<=rear;i++)
	  {
	   printf("%d ",a[i]);
	  }
	  printf("\n");
	  }
	  }
