#include<iostream>
using namespace std;
class base
{
    int a;
    public:
    base()
    {
        a=0;
    }
    base(int x)
    {
        a = x;
    }
    friend base operator+(base n1,base n2);
    void display()
    {
        cout<<a;
    }
};
base operator+(base n1,base n2)
{
    base temp;
    temp.a = n1.a + n2.a;
    return temp;
}
int main()
{
    int x,y;
    cout<<"Enter the valur of x and y"<<endl;
    cin>>x>>y;
    base b1(x);
    base b2(y);
    base b3;
    b3 = b1 + b2;
    b3.display();

    return 0;
}
