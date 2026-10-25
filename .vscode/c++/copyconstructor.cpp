#include<iostream>
using namespace std;
class d
{
    int meter;
    int centimeter;
    
    public:
    d()
    {
        meter = 0;
        centimeter = 0;
    }
    d(int m, int cm)
    {
        meter = m;
        centimeter = cm;
    }
    d(d &d1,d &d2)
    {
        meter = d1.meter + d2.meter;
        centimeter = d1.centimeter + d2.centimeter;

        meter = meter  + centimeter/100;
        centimeter = centimeter + centimeter % 100;


    }
    
    void putdata()
    {
        cout<<meter<<" "<<centimeter<<endl;
    }
        
};
int main()
{
    d d1(32,24);
    d d2(23,12);
    d d3(d1,d2);
    d3.putdata();

    return 0;
}