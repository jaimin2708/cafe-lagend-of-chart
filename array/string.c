#include<stdio.h>
void main()
{
     char str[20];
     gets(str);
     int i=0;
     int k=0;
     printf("ENter the number of character");
    while(str[i]!='\0')
    {

           i++;

    } 
    printf("%d",i);
    int j=0;
    while(str[j]!='\0')
    {
        j++;
        if(str[j]>='a' && str[j]<='z')
        {
            puts(str[j]);
        }
        
       
    }
    printf("%d",j);



}