#include<stdio.h>
void main()
{
struct sparse{
int row;
int col;
int value;
}spars[40];

int r,c;
printf("Enter the Rows and Columns:\n");
scanf("%d%d",&r,&c);
int i,j,a[50][50];
printf("Enter the Matrix:\n");
	for(i=0;i<r;i++)
	{
	 for(j=0;j<c;j++)
	 {
	 scanf("%d",&a[i][j]);
	 }
	} 
int k=1,count=0;
	   for(i=0;i<r;i++)
	   {
	    for(j=0;j<c;j++)
	     {
	      if(a[i][j]!=0)
	      {
	      spars[k].row=i;
	      spars[k].col=j;
	      spars[k].value=a[i][j];
	      k++;
	      count++;
	      }
	     } 
	    }
  	spars[0].row=r;
  	spars[0].col=c;
  	spars[0].value=count;
   printf("The Tuple Matrix:\n");
   printf("ROW\tCOLUMN\tVALUE\n");
      







 for(i=0;i<k;i++)
       {
        printf("%d\t%d\t%d\n",spars[i].row,spars[i].col,spars[i].value);
      }
      }
