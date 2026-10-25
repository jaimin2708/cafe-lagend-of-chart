#include<iostream>
using namespace std;
class base
{
    int num;
    public:
    void getdata()
    {
        cout<<"Enter the value"<<endl;
        cin>>num;
    }
    void putdata()
    {
        cout<<num<<endl;;
    }
    base operator ++()
    {
        base b1;
       b1.num = ++num;
       return b1;
    }
    base operator ++(int)
        {
            base b2;
            b2.num = num++;
            return b2;   
        }
};
int main()
{
    base b,b2;
    b.getdata();
    b2 = ++b;
    b2.putdata();
    base b3;
    b3 = b++;
    b3.putdata();
    return 0;
}