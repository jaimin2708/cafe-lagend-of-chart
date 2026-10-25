#include<stdio.h>
void main()
{
   char str[20];
   int i=0;

   printf("Enter the chara\n");

   gets(str);

   while(str[i]!='\0')
   {
    i++;
   }
   
    
    printf("%d",i);

}