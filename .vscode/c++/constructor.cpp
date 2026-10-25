#include<iostream>
using namespace std;
class number
{
    int m,n;

    public:
    number(int x,int y)
    {
        m=x;
        n=y;
    }
    void display()
    {
        cout<<m<<" "<<n<<endl;
    }
};
int main()
{
    number n1(10,20);
    number n2(67,78);

    n1.display();
    n2.display();


    return 0;
}
