#include<stdio.h>
void main()
{
    int a[100],n;
    printf("Enter the size of array");
    scanf("%d",&n);
    int *p;
    p=&a[0];
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d",p+i);
    }
    int max,min;
    max=*p;
    min=*p;
    int pos1=0,pos2=0;

    for(i=1;i<n;i++)
    {
        if(*(p+i)>max)
        { 
            max=*(p+i);
            pos1=i;
        }
    }
     for(i=1;i<n;i++)
    {
        if(*(p+i)<min)
        {
            min=*(p+i);
            pos2=i;
        }
    }
    int temp;
    temp=*(p+pos1);
   *(p+pos1)=*(p+pos2);
   *(p+pos2)=temp;
    
    for(i=0;i<n;i++)
    {
        printf("%d ",*(p+i));
    }

}