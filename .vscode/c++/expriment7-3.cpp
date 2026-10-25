#include<iostream>
using namespace std;
typedef void (*add)(int,int);
void sum(int x,int y)
{
    int sum;
    sum = x + y;
    cout<<sum<<endl;
}
int main()
{
    int a,b;
    cout<<"Enter the value of a and b"<<endl;
    cin>>a>>b;

    add ptr;
    ptr = &sum;
    ptr(a,b);

    return 0;

}