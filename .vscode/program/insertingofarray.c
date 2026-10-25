#include<stdio.h>
void main()
{
   int a[100];
   int i,n,b;
   printf("Enter the total number of element\n");
   scanf("%d",&n);
   
   printf("Enter the elemrnt of array\n");

   for(i=0;i<n;i++)
   {
    scanf("%d",&a[i]);
   }
    
   printf("Enter the number to inserted in array");
   scanf("%d",&b);

   int pos;

   printf("Enter the position you want inserted the number ");
   scanf("%d",&pos);
   

   for(i=n-1;n>=pos;i--)
   {
      a[i+1]=a[i];

   }
   a[pos]=b;

   for(i=0;i<=n;i++)
   {
    printf("%d ",a[i]);
   }




}