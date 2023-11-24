#include<stdio.h>
void main(){
int n,i,pos,a[30];
printf("Enter the number of elements in Binary tree:");
scanf("%d",&n);
printf("Enter the elements:");
	for(i=1;i<=n;i++)
	{
	 scanf("%d",&a[i]);
	}
printf("Enter the position to be checked:");
scanf("%d",&pos);
   if((pos/2)!=0)
    {
     printf("Parent of %d is %d.\n",a[pos],a[pos/2]);
    }
   else
    {
     printf("%d has no parent.\n",a[pos]);
    }
    if((2*pos)<n)
    {
    printf("Left child of %d is %d.\n",a[pos],a[2*pos]);
    }
    else
    {
     printf("%d has no Left child.\n",a[pos]);
    }
    if((2*pos+1)<=n)
    {
     printf("Right child of %d is %d.",a[pos],a[2*pos+1]);
    }
    else
    {
     printf("%d has no Right child.\n",a[pos]);
    }
} 
     	
