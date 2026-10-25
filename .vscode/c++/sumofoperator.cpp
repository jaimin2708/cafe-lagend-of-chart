#include<iostream>
using namespace std;
class base 
{
    int b;
    int sum;
    public:
    void getdata()
    {
        cout<<"Enter the one number"<<endl;;
        cin>>b;
    }
     base operator +(int c)
     {
        base temp;
        temp.sum = b + c;
        return temp;
     }
     void putdata()
     {
        cout<<sum<<endl;
     }
};
int main()
{
    base b1;
    b1.getdata();
    base b2;
    b2 = b1 + 5;
    b2.putdata();
    return 0;
}
