#include<stdio.h>
void main()
{
   int n;
   printf("Enter the total number you want\n");
   scanf("%d",&n);
   int i;

   for(i=2;i<n;i++)
   {
      if(n%i!=0)
      {
        printf("%d",i);
      }
   }


}