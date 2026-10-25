#include<stdio.h>
void main()
{
   int arr[6];
   int i,b;

   for(i=0;i<5;i++)
   {
       scanf("%d",&arr[i]);

   }
    for(i=0;i<5;i++)
   {
       printf("%d",arr[i]);

   }
   printf("Enter the number to be inserted");
   scanf("%d",&b);
   arr[5] = b;
   for(i=0;i<=5;i++)
   {
      printf("%d\n",arr[i]);

   }
   




}