#include<stdio.h>
void main()
{
int count=0;
int limit;
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
int search;
printf("Enter the number to search:");
scanf("%d",&search);
count++;
int found=0;
count++;
for(i=0;i<limit;i++)
{
count++;
if(number[i]==search)
{
count++;
found++;
}
count++;
}
if(found<1)
{
count++;
printf("The number is not present\n");
}
else
{
count++;
printf("The number is  present\n");
}
printf("Time complexity is %d\n",count);
printf("Space Complexity is %d",20+limit*4);
}
