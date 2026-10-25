#include<stdio.h>
int main()
{ 
   int n,i,max,min;
   printf("Enter the size of array\n");
   scanf("%d",&n);
   int arr[n];

   int pos1=0,pos2=0;
 
      
   for(i=0;i<n;i++)
   {

       scanf("%d",&arr[i]);


   }
   max = arr[0];
   min = arr[0];
            

   for(i=1;i<n;i++)

   {

      if(arr[i]>max)
      {
            max = arr[i];
            pos1 = i;
                     
      }
      if(arr[i]<min)
      {
           min = arr[i];
           pos2 = i;

      }


   }
   printf("max= %d\n",max);
   printf("min= %d",min);
    

   int temp;
   temp = arr[pos1];
   arr[pos1]=arr[pos2];
   arr[pos2]=temp;
   
      for(i=0;i<n;i++)
      {

         printf("%d\n",arr[i]);
      }

      return 0;

}