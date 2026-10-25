#include<stdio.h>
void main()
{
    int year;
    printf("Enter the year\n");
    scanf("%d",&year);
    int match=0;
    
    if(year%4!=0)
    {
        match=1;
    }
    
    if(match==0)
    {
        printf("ENter year is leap year");
    }
    else
    {
        printf("Enter year is not a leep year");
    }
}