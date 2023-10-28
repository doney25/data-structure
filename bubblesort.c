#include<stdio.h>
void main()
{
int limit;
int count=0;
printf("Enter the Limit:");
scanf("%d",&limit);
count++;
int i,number[limit];
count++;
printf("Enter the numbers:");
for(i=0;i<limit;i++)
{
count++;
scanf("%d",&number[i]);
count++;
}
int j,temp;
for(i=0;i<limit;i++)
{
count++;
for(j=i+1;j<limit;j++)
{
count++;
if(number[i]>number[j])
{
count++;
temp=number[i];
count++;
number[i]=number[j];
count++;
number[j]=temp;
count++;
}
}
}
printf("Sorted array is:\n");
for(i=0;i<limit;i++)
{
count++;
printf("%d\n",number[i]);
}
printf("Time complexity is %d\n",count);
printf("Space complexity is %d",20+limit*4);
}
