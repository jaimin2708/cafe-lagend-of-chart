#include<iostream>
using namespace std;
class number
{
    int m;
    public:
    number()
    {
        m=0;
    }
    number(int num)
    {
        m = num;
    }
    number(const number & x)
    {
        m = x.m;
    }
    void display()
    {
        cout<<m<<endl;
    }

};
int main()
{
    number n1(56);
    number n2(n1);
    number n3(46);
    number n4 = n3;

    n1.display();
    n2.display();
    n3.display();
    n4.display();
    return 0;
}