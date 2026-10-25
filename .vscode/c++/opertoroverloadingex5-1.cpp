#include<iostream>
using namespace std;
class complex
{
    int real;
    int img;
    public:
    void getdata()
    {
        cout<<"ENter the imgneray and real part"<<endl;;
        cin>>img>>real;
    }
    void display()
    {
        cout<<real<<endl<<img<<endl;
    }
    complex operator*(complex c)
    {
        complex temp;
        temp.real = real * c.real;
        temp.img = img * c.img;
        return temp;

    }
};
int main()
{
    complex c1,c2,c3;
    c1.getdata();
    c2.getdata();
    c3 = c1 * c2;
    c3.display();

    return 0;

}