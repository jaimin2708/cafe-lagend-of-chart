#include<iostream>
using namespace std;
void divide(int a,int b)
{
    try
    {
        if(b==0)
        {
            throw b;
        }
        else
        {
            cout<<"the divison is:"<<a/b<<endl;
        }
    }
    catch(int b)
    {
        cout<<"your denominator is zero"<<" "<<b<<endl;
    }
    
}
int main()
{
    int x,y;
    cout<<"Enter the two number"<<endl;
    cin>>x>>y;
    divide(x,y);

    return 0;
}
