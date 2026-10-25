#include<stdio.h>
void main()
{
    int a[20],b[20];
    int n,i,m,j;
    printf("ENter the element in a array\n");
    scanf("%d",&n);

    printf("ENyer the element in b array\n");
    scanf("%d",&m);

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
     for(i=0;i<m;i++)
    {
        scanf("%d",&b[i]);
    }
    int match=0;

    for(i=0;i<n;i++)
    {
        
        for(j=0;j<m;j++)
        {
            if(a[i]==b[j])
            {
                match=1;
                printf("%d ",a[i]);
                
            }
        }
    }
    if(match==0)
    {
        printf("no any element is comman in atray");
    }


}
