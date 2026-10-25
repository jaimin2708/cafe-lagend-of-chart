#include<iostream>
using namespace std;
class base
{
    public:
    void display()
    {
        cout<<"jaimin";
    }
};
class derived : public base
{
    public:
    void display()
    {
        cout<<"het"<<endl;
        base::display();
    }
};
int main()
{
    derived d1;
    d1.display();
    return 0;
}
