#include<stdio.h>
void main()
{
    char str1[20];
    char str2[20];

    printf("Enter the strings\n");
    gets(str1);

    printf("Enter the second string\n");
    gets(str2);

    int i=0;

    while(str1[i]==str2[i] && str1[i]!='\0' && str2[i]!='\0')
    {
        i++;
    }

    if(str1[i]!=str2[i])
    {
        printf("Two strigs is different");
    }
    else{
        printf("the two strings are equal");
    }
}


 
    
