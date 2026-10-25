#include<stdio.h>
int sum(int a[]);
void main()
{
    int arr[10];
    int i,ans;
    for(i=0;i<5;i++)
    {
         
          scanf("%d",&arr[i]);


    }
    ans = sum(arr);
    printf("%d",ans);
}
int sum(int a[])
{
  int b=0;
  for(int i=0;i<5;i++)
  {

    b = b + a[i];
    

  }
  return(b);


}







