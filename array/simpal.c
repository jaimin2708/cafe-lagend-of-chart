#include<stdio.h>
void main()
{
      int arr[10];

      int i,n,pos;
      printf("Enter the element :");
      for(i=0;i<5;i++)
      {
          scanf("%d",&arr[i]);

       

      }
      printf("Enter the number you enter");
      scanf("%d",&n);
      printf("Enter the position of element you inserted number ");
      scanf("%d",&pos);

      for(i=5;i>pos;i--)
      {
         arr[i] = arr[i-1];



      }
      arr[pos]=n;

      for(i=0;i<=5;i++)
      {

        printf("%d\n",arr[i]);

      }




}






























