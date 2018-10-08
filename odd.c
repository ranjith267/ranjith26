#include<stdio.h>
void main()
{
  int i,j,n,count=0;
  printf("Enter the starting range\n");
  scanf("%d",&n);
  printf("Enter the final range\n");
  scanf("%d",&j);
   for(i=n+1;i<j;i++)
    {
     if(i%2!=0)
      {
      printf("%d\n",i);
       count++;
     }
     }
printf("%d",count);
}
