#include<iostream>
using namespace std;
class interger
{
    int m;
    int n;
    public:
    interger(int a,int b)
    {
        m=a;
        n=b;        
    }
    void display()
    {
        cout<<m<<" "<<n<<endl;
    }


};
int main()
{
    interger i1(110,34);  // impilicit conversion
    interger i2 = interger(576,789);  // explicit conversion

    i1.display();
    i2.display();


    return 0;
}
