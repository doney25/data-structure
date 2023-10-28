#include<stdio.h>
void main()
{
int limit;
printf("Enter the number of terms:\n");
scanf("%d",&limit);
   struct polynomial{
   int coef;
   int expo;
   }poly[50];
int i,j;
 printf("Enter the coefficents:\n");
   for(i=0;i<limit;i++)
   {
    scanf("%d",&poly[i].coef);
   } 
 printf("Enter the exponentials:\n");
   for(i=0;i<limit;i++)
   {
    scanf("%d",&poly[i].expo);
   } 
 printf("The Polynomial Expression:\n");
   for(i=0;i<limit;i++)
   {
    if(i<limit-1)
    {
     printf("%dx^%d+",poly[i].coef,poly[i].expo);
    }
    else
    {
     printf("%dx^%d",poly[i].coef,poly[i].expo);
    }
    }
    } 

