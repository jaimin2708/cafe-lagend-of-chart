#include<stdio.h>
void main()
{
    int arr[10];
    int i,b,j;
    int c=0;
    printf("ENter the element :");

    for(i=0;i<5;i++)
    {
           scanf("%d",&arr[i]);

    }
    printf("ENter the number to deleted ");
    scanf("%d",&b);

    for(i=0;i<5;i++)
    {

        if(arr[i]==b)
        {
           c++;
           
           for(j=i;j<5;j++)
           {
               arr[j]=arr[j+1];


           }

          

        }


          i--;
    }
    for(i=0;i<5-c;i++)
    {

        printf("%d\n",arr[i]);


    }


}