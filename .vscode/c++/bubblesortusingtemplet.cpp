#include<iostream>
using namespace std;
template<class T>
void bubblesort(T arr[],T n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                T temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }

}
template<class T>
void display(T arr[],T n2)
{
    for(int i=0;i<n2;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int intarr[] = {64,34,57,78,89,12,1,4};
    int n1;
    n1 = sizeof(intarr) / sizeof(intarr[0]);
    cout<<n1<<endl;
    bubblesort(intarr,n1);
    display(intarr,n1);

    return 0;  
}