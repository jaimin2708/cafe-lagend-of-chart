#include<stdio.h>
int sum(int x);
void main()
{
   int n,ans;
   printf("ENter the number :");
   scanf("%d",&n);

   ans = sum(n);
   printf("%d",ans);



}
int sum(int n)


{
    int s=0;
    if(n==0)
    {
        return;

    }
      
    s = n + sum(n-1);
    return(s);
  


}