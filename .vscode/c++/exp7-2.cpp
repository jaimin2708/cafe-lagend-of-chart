#include<iostream>
using namespace std;
class base
{
    public:
     void display()
    {
        cout<<"base class display function"<<endl;;
    }
    virtual void show()
    {
        cout<<"base class show function"<<endl;
    }
};
class derived : public base
{
    public:
    void display()
    {
        cout<<"derived class display function"<<endl;
    }
    void show()
    {
        cout<<"derived class show function"<<endl;
    }
};
int main()
{
    base *b;
    derived obj;
    b = &obj;
    b->display();
    b->show();

    return 0;
}