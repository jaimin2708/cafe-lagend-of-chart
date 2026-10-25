#include<stdio.h>
void main()
{
   
      char name[10] = "DELHI";
      char *cptr;
      cptr=name;
      int length;

      while(*cptr!='\0')
      {

        printf("the character is %c and addres is %u\n",*cptr,cptr);
        cptr++;


      }
      length = cptr-name;
      printf("the length is %d",length);


}