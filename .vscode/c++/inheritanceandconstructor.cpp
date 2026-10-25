#include<iostream>
using namespace std;

class A
{
public:
    A(int x)
    {
        cout<<x<<" ";
    }
};

class B : public A
{
public:
    B(int a,int b) : A(a)
    {
        cout<<b<<" ";
    }
};

int main()
{
    B obj(5,10);
    return 0;
}