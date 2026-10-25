#include<iostream>
using namespace std;
int main()
{
    int arr[] = {11,22,33,44,55};
    int *ptr;
    ptr = &arr[2];
    int i;
    for(i=0;i<5;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<*ptr<<endl;
    *ptr = *ptr-2;
    cout<<*ptr<<endl;
    ptr = ptr-2;
    cout<<*ptr<<endl;
    *ptr = *ptr + 100;
    cout<<*ptr<<endl;
    ptr = ptr + 3;
    cout<<*ptr<<endl;

}