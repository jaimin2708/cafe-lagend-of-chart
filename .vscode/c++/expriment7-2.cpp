#include<iostream>
using namespace std;

int main()
{
    // int arr[50];
    // int n,i;
    // cout<<"Enter the total size of array"<<endl;
    // cin>>n;
    // for(i=0;i<n;i++)
    // {
    //     cin>>arr[i];
    // }
    // cout<<endl;
    // int *ptr;
    // ptr = arr;
    // int sum =0;
    // for(i=0;i<n;i++)
    // {
    //     if(*ptr%2 != 0)
    //     {
    //         sum = sum + *ptr;
    //     }
    //     ptr++;
    // }
    // cout<<sum<<endl;

    int arr[5] = {11,12,13,14,15};
    // int a,b,c,d,e;
    int *p[5]={arr,arr+1,arr+2,arr+3,arr+4}
    // p[0]=&a;  &a[0];
    // p[0]=&b;  &a[1];
    // p[0]=&c;  &a[2];
    // p[0]=&d;  &a[3];
    // p[0]=&e;  &a[4];
    
    int i;
    int a;
    cout<<"Enter the number"<<endl;
    cin>>a;
    int j;

    for(i=0;i<5;i++)
    {
        if(a == (*arr[i]))
        {
             j = 5;
            cout<<"your number is here"<<endl;
        }
        break;
    }
    if(j!=5)
    {
        cout<<"your number is not here"<<endl;
    }
}