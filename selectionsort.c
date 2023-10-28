#include<stdio.h>
void main()
{
int limit;
int count=0;
printf("Enter the Limit:");
scanf("%d",&limit);
count++;
int i,num[limit];
int j,min_index,temp;
printf("Enter the numbers:");
	for(i=0;i<limit;i++)
	 {
	  count++;
	  scanf("%d",&num[i]);
	  count++;
 	 }
		for(i=0;i<limit-1;i++)
		{
		count++;
		 for(j=i+1;j<limit;j++)
		 {
		 count++;
		  min_index=i;
		  if(num[j]<num[min_index])
		   {
		   count++;
		    min_index=j;
		    }
  if(num[i]>num[min_index])
    {
    count++;
     temp=num[i];
     count++;
     num[i]=num[min_index];
     count++;
     num[min_index]=temp;
     count++;
     }
    }
   } 
    printf("The sorted array: ");
    for(i=0;i<limit;i++)
	 {
	 count++;
	  printf("%d\t",num[i]);
 	 }
printf("\nTime complexity is %d",count);
printf("\nSpace complexity is %d",24+limit*4);
} 	
