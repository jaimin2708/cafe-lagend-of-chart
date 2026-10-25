#include<iostream>
using namespace std;
class area
{
    public:
    area(int b,int l)
    {
        int c = b*l;
        cout<<c<<endl;        
    }
    
    area(int s)
    {
        int c = s*s;
        cout<<c<<endl;
    }
    area(float b,float l)
    {
        float c;
        c = 0.5 * b * l;
        cout<<c<<endl;
    }

};
int main()
{
    area rectangle(10,20);
    area square(10);
    area triangle(20.0f,10.0f);

    return 0;
}