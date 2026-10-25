#include<stdio.h>
void incdec(int num);
void main()
{
   int num;
   printf("Enter the number ");
   scanf("%d",&num);

   incdec(num);




}
void incdec(int num)
{
   if(num==0)
   {
      return;

   }
   printf("%d\n",num);
   incdec(num-1);
   printf("%d\n",num);




}