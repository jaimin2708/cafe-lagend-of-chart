#include<iostream>
using namespace std;
class base
{
    int x;
    public:
    int area(int a)
    {
        int y;
        y=a;
        return y*y;
    }
    int area(int a,int b)
    {
        int y,z;
        y=a;
        z = b;
        return y*z;
    }
    void getdata()
    {
        cout<<"ENter the value of x"<<endl;
        cin>>x;
    }
    void display()
    {
        cout<<"value of x:"<<x<<endl;
    }
    base operator+(base b1)
    {
        base b;
        b.x = x + b1.x;
        return b;
    }
    virtual void show()
    {
        cout<<"base class"<<endl;;
    }
};
class derived : public base
{
    public:
    void show()
    {
        cout<<"derived class"<<endl;;
    }

};
int main()
{
    base b1;
    base b2;
    base b3;
    b1.getdata();
    b2.getdata();
    b3 = b1 + b2;
    b3.display();
    base b5;
    cout<<b5.area(2)<<endl;
    cout<<b5.area(2,4)<<endl;
    base *ptr;
    derived d;
    ptr = &d;
    ptr->show();
    return 0;
}
