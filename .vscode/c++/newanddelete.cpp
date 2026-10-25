#include<iostream>
using namespace std;
int main()

{
    int *p;   
    int n;
    printf("Enter the size ");
    scanf("%d",&n);
    p = new int[n];
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d", p+i);
    }
    int num;
    printf("Enter the numer you want to find array");
    scanf("%d",&num);
    int match = 0;

    for(i=0;i<n;i++)
    {
        if(num == *(p+i))
        {
            match = 1;
            printf("%d",*(p+i));
            break;
        }
    }
    if(match == 0)
    {
        printf("your entered number is not found in array");
    }
    delete(p);
    // int j;
    // int temp;
    // for(i=0;i<n-1;i++)
    // {
    //     for(j=i+1;j<n;j++)
    //     {
    //         if(*(p+i)>*(p+j))
    //         {
    //             temp = *(p+i);
    //             *(p+i) = *(p+j);
    //             *(p+j) = temp;
    //         }
    //     }
    // }
    // printf("array after sorting is \n");
    // for(i=0;i<n;i++)
    // {
    //     printf("%d ",*(p+i));
    // }
//     int max;
//     int min;
//     int pos1 =0,pos2=0;
//     max = *p;
//     min = *p;
//     for ( i = 1; i < n; i++)
//     {
//         if(max > *(p+i))
//         {
//             max = *(p+i);
//             pos1 = i;
//         }
        
//         if(min < *(p+i))
//         {
//             max = *(p+i);
//             pos2 = i;
//         }

//     }
//     int temp;
//     temp = *(p+pos1);
//     *(p+pos1) = *(p+pos2);
//     *(p+pos2) = temp;
    
//     for(i=0;i<n;i++)
//     {
//         printf("%d ",*(p+i));
//     }
    

 }

