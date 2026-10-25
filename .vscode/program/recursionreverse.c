#include<stdio.h>
void rev(int x);
void main()
{
     int num;
     printf("Enter the number :");
     scanf("%d",&num);

   
     rev(num);
     




}
void rev(int a)
{
  if(a==0)
  {
     return;

  }
  printf("%d\n",a);
  rev(a-1);


}