#include<iostream>
using namespace std;
class time
{
    int hour;
    int min;

    public:
    void getdata()
    {
        cout<<"Enter the hour and min"<<endl;
        cin>>hour>>min;
    }
    void putdata()
    {
        cout<<hour<<min<<endl;
    }
    int sum(time t1,time t2)
    {
        int a;
        a = t1.hour + t2.hour;
        int b;
        b = t2.min + t1.min;
        return (a);
        // return (b);
    }
};
int main()
{
    time t1;
    time t2;
    time t3;

    t1.getdata();
    t2.getdata();
    t1.putdata();
    t2.putdata();

    cout<<t3.sum(t1,t2)<<endl;

    return 0;
}