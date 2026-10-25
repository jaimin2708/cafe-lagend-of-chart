#include<iostream>
using namespace std;
class B
{
    protected:
    int a;
    int b;
    public:
    void getdata()
    {
        cout<<"Enter the a and b"<<endl;;
        cin>>a>>b;
    }
    void show()
    {
        cout<<"a:"<<a<<" "<<"b:"<<b<<endl;
    }
    // int returnb()
    // {
    //     return b;
    // }
    // int returna()
    // {
    //     return a;
    // }

};
class D : protected B
{
    int c;
    public:
    void mul()
    {
        getdata();
        c = b * a;
    }
    void display()
    {
        show();
        cout<<"c:"<<c<<endl;
    }
};
int main()
{
    D obj;
    obj.mul();
    obj.display();

    return 0;
}