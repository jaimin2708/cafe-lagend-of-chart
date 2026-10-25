#include<stdio.h>
void main()
{
    char str1[100];
    char str2[100];
    printf("Enter the numebr of characters");
    int i=0;
    gets(str1);
    gets(str2);

    while(str1[i]!='\0')
    {
        i++;
    }
    str1[i]=' ';
    int j=0;
    while(str2[j]!='\0')
    {
        str1[i]=str2[j];
        i++;
        j++;
    }

    str1[i]='\0';

    puts(str1);



}
