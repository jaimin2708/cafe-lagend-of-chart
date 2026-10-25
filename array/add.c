#include<stdio.h>
int add(int c,int d)
{
   return c + d;

}

    

void main()
{
    int a;
    printf("Enter the first number\n");
    scanf("%d",&a);
    int b;
    printf("Enter the second number\n");
    scanf("%d",&b);
    
    int sum = add(a,b);
    printf("%d",sum);
    
    


   
}