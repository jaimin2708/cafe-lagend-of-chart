#include<iostream>
using namespace std;
class base
{
    int a;
    int b;
    public:
    void getdata(int x,int y)
    {
        a = x;
        b = y;
    }
    void display()
    {
        cout<<"a:"<<a<<endl<<"b:"<<b<<endl;
    }
    base operator+(base obj)
    {
        base temp;
        temp.a = a + obj.a;
        temp.b = b + obj.b;
        return temp;
    }
};
int main()
{
    base b1,b2,b3;
    b1.getdata(10,20);
    b2.getdata(20,30);

    b3 = b1 + b2;
    b3.display();

    return 0;
}