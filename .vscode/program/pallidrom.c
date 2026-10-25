#include<stdio.h>
void main()
{
      char str[20];
      gets(str);
      int i=0,j;
      j =strlen(str)-1;
      int match=0;
      printf("Entere the chracters");
      while(i<j)
      {

         if(str[i]!=str[j])
         {
                match =1;
                break;
                


         }
         i++;
         j--;


      }
      printf("the given character is not a pallidrom");





}