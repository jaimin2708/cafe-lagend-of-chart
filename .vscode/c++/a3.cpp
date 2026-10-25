#include<iostream>
using namespace std;
int large(int (*a)[int n])
{
    int i,j,temp;
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[j]<a[i])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
               
            }
        }
    }
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<endl;
    }


}
int main()
{
    int a[100];
    int n;
    cout<<"ENter the size os array"<<endl;
    cin>>n;
    large(a,n);
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<endl;
    }
    return 0;
}