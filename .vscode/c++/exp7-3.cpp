#include<iostream>
using namespace std;
class shape
{
    protected:
    double a;
    double b;
    public:
    void getdata()
    {
        cout<<"Enter the value of a and b "<<endl;;
        cin>>a>>b;
    }
    virtual void putdata()
    {

    }
};
class triangle : public shape
{
    public:
    void putdata()
    {
        cout<<"the area of triangls is :"<<0.5*a*b<<endl;
    }
};
class rectangle : public shape
{
    public:
    void putdata()
    {
        cout<<"the area of rectangle is :"<<a*b<<endl;
    }
};
int main()
{
    shape *s;
    triangle t1;
    rectangle r1;
    int choise;
    cout<<"1 for triangle"<<endl<<"2 for rectangle"<<endl;
    cin>>choise;

    if(choise==1)
    {
        s = &t1;
    }
    else if(choise==2)
    {
        s = &r1;
    }
    else
    {
        cout<<"please enter only 1 and 2"<<endl;
        return 0;
    }
    s->getdata();
    s->putdata();
    return 0;

}

