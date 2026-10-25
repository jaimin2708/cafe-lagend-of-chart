#include<iostream>
using namespace std;
class Time
{
    int hours;
    int min;

    public:
    void gettime()
    {
        cout<<"Enter the hours"<<endl;
        cin>>hours;
        cout<<"Enter the min"<<endl;
        cin>>min;
    }
    void puttime()
    {
        cout<<"The hours:"<<hours<<"the min:"<<min<<endl;
    }
    void sum(Time t1,Time t2)
    {
        min = t1.min + t2.min;
        hours = t1.hours + t2.hours;
        min = min % 60;
    }

};
int main()
{
    Time t1,t2,t3;
    cout<<"Enter the first time";
    t1.gettime();
     cout<<"Enter the second time";
    t2.gettime();
    t3.sum(t1,t2);

    t1.puttime();
    t2.puttime();
    t3.puttime();

    return 0;
}