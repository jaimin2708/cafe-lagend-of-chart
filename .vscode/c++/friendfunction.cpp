#include<iostream>
using namespace std;
class number
{
    int real;
    int img;
    public:
    void getdata()
    {
        cout<<"Enter the two complex number";
        cin>>real>>img;
    }
    void putdata()
    {
        cout<<real<<" "<<img<<endl;
    }   
    friend number sum(number,number);
    friend number sub(number,number); 
};
number sum(number n1,number n2)
{
    number a;
    a.real = n1.real + n2.real;
    a.img = n1.img + n2.img;
    return(a);
}
number sub(number n1,number n2)
{
    number b;
    b.real = n1.real - n2.real;
    b.img = n1.img - n2.img;
    return(b);
}
int main()
{
    number n1,n2,n3,n4;
    n1.getdata();
    n2.getdata();
    n3 = sum(n1,n2);
    n3.putdata();
    n4 = sub(n1,n2);
    n4.putdata();

    return 0;
}