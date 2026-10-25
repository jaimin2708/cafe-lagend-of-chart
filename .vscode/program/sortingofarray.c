#include<stdio.h>
void main()
{
   int arr[100];
   int i,n;
   printf("Enter the number of element\n");
   scanf("%d",&n);

   printf("Enter the element");

   for(i=0;i<n;i++)
   {
   scanf("%d",&arr[i]);

   }

   

   printf("the sort array is given below\n");

   int j;
   int temp;

   for(i=0;i<n-1;i++)
   {
    for(j=i+1;j<n;j++)
    {
      if(arr[j]<arr[i])
      {
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
      }

    }
   }
   for(i=0;i<n;i++)
   {
   printf("%d\n",arr[i]);

   }


}