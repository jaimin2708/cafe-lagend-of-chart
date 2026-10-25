#include<iostream>
using namespace std;
class base 
{
    int a;
    int b;
    int sub;
    public:
    void getdata()
    {
        cout<<"enter the value"<<endl;;
        cin>>a>>b;
    }
    base operator - (base c)
    {
        base temp;
        temp.sub = a-c.b;
        return temp;
    }
    friend base operator - (base j)
    {
        base temp;
        temp.sub = a - j.b;
        return temp;
    }
    void putdata()
    {
        cout<<sub<<endl;
    }
};
int main()
{
    base b1,b2,b3;
    b1.getdata();
    b2.getdata();
    b3 = b1 - b2;
    b3.putdata(); 

    return 0;
    
}