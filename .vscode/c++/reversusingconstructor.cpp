#include<iostream>
using namespace std;
class number
{
    public:
    number(int a)
    {   
        int remanidar,b=0;
       while (a != 0)
       {
          remanidar = a%10;
          b = b*10 + remanidar;
          a = a/10;

       }
       cout<<b<<endl;
    }
};
int main()
{
    int num;
    cout<<"Entre the number"<<endl;
    cin>>num;
    number n(num);
    return 0;
}

