#include <stdio.h>

void main() {
    int i,j,limit,temp,x,flag=0,right,left,middle,count=0;
    count+=2;
    printf("Enter the limit:");
    scanf("%d",&limit);
    count+=2;
    int a[limit];
    printf("Enter the numbers:\n");
    for(i=0;i<limit;i++)
    {
        count++;
        scanf("%d",&a[i]);
        count++;
    }    
    printf("Enter the value to be checked:\n");
    scanf("%d",&x);
    count++;
    for(i=0;i<limit;i++)
    {
        count++;
        for(j=i+1;j<limit;j++)
        {
            count++;
            if(a[i]>a[j])
            {
                count++;
                temp=a[i];
                count++;
                a[i]=a[j];
                count++;
                a[j]=temp;
                count++;
            }
        }
    }
   
    printf("\nSorted array: ");
    for(i=0;i<limit;i++)
    {
        count++;
        printf("%d ",a[i]);
        count++;
    }
   
    left=0;
    count++;
    right=limit-1;
    count++;
    while(left<=right)
    {
        count++;
        middle=(left+right)/2;
        count++;
        if(x>a[middle])
        {
            count++;
            left=middle+1;
            count++;
        }
        else if(x<a[middle])
        {
            count++;
            right=middle-1;
            count++;
        }
        else
        {
            flag++;
            count++;
            break;
        }
    }
   
    if(flag>0)
    {
        count++;
        printf("\n%d is present in array",x);
        count++;
    }
    else
    {
        printf("\n%d is not present in the array",x);
        count++;
    }
    count+=2;
    printf("\nTime complexity is %d",count);
    printf("\nSpace complexity is %d",(40+(4*limit)));
}
