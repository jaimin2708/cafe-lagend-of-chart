#include<stdio.h>
void ans(int x[]);
void main()
{
    int arr[10];
    int i;
    printf("Enter the element of array :");
   
    for(i=0;i<5;i++)
    {
         scanf("%d",&arr[i]);

    }
    ans(arr);
}
void ans(int x[])
{
    int n;
    int match=0;
    int pos;
    printf("Enter the number you find in arr :");
    scanf("%d",&n);
     
    

    for(int i=0;i<5;i++){
    
        if(x[i]==n){
         
            match =1;
            pos=i;
            break;
       

        }
    }
    if(match==0)
    {
         printf("The give numbe is not in arr\n");

    }
    else{

      printf("THe give number is found in array\n");
       printf("the value find at position on %d ",pos);


    }
   
    



}











