#include<iostream>
using namespace std;
class number
{
    int m,n;
    public:
    number()
    {
        m=0;
        n=0;
    }
    number(int num)
    {        
        m = n = num;
    }
    number(int a,int b)
    {
        m=a;
        n=b;
    }
    friend number sum(number,number);
    friend void show(number);


};
number sum(number n1,number n2)
{
    number n4;
    n4.m = n1.m + n2.m;
    n4.n = n1.n + n2.n;
    return (n4);    
}
void show(number n5)
{
    cout<<n5.m<<" "<<n5.n<<endl;
}
int main()
{
    number n1(68);
    number n2(78,34);
    number n3;

    n3 = sum(n1,n2);

    show(n1);
    show(n2);
    show(n3);


    return 0;
}