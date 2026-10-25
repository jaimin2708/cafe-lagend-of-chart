#include<stdio.h>
void main()
{
    int n,i,j;
    n=0;

    for(i=0;i<5;i++)
    {
        for(j=0;j<=i;j++)
        {
            n++;
            printf("%d ",n);
        }
        printf("\n");
    }  
}