#include<iostream>
using namespace std;
class person
{
    protected:
    int rollno;
    public:
    void getdataperson()
    {
        cout<<"Enter the roll no "<<endl;
        cin>>rollno;
    }
    void showperson()
    {
        cout<<"rollno:"<<rollno<<endl;
    }
};
class marks : public person
{
    protected:
    int m1;
    int m2;
    public:
    void getdata()
    {
        cout<<"Enter the marks of student"<<endl;
        cin>>m1>>m2;
    }
    void showmarks()
    {
        cout<<"m1:"<<m1<<endl<<"m2:"<<m2<<endl;
    }
};
class result : public marks
{
    protected:
    int total;
    public:
    void show()
    {
        int m;
        m = m1 + m2;
        cout<<"total:"<<m<<endl;
    }

};
int main()
{
    result r1;
    r1.getdataperson();
    r1.getdata();
    r1.showperson();
    r1.showmarks();
    r1.show();
    return 0;
}

