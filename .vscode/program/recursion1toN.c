#include<stdio.h>
void rev(int a,int x);
void main()
{
     int num;
     printf("Enter the number :");
     scanf("%d",&num);

   
     rev(1,num);
     




}
void rev(int a,int b)
{
  if(a>b)
  {
     return;

  }
  printf("%d\n",a);
  rev(a+1,b);


}