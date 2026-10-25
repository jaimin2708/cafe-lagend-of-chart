#include<stdio.h>
int factorial(int x);
void main()
{
   int num;
   printf("Enter the number ");
   scanf("%d",&num);

   int ans;
   ans = factorial(num);
   printf("%d",ans);



}
int factorial(int a)
{ 
    if(a==1)
    {
       return(1);

    }
    else
    {
   int b;
   b = a*factorial(a-1);
   return(b);
    }


}
