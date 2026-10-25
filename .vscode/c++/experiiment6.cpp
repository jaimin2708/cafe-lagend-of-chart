#include<iostream>
using namespace std;
class student
{
    string uni;
    string degree;
    public:
    void getdata()
    {
        cout<<"Enter the univercity and degree"<<endl;
        cin>>uni>>degree;
    }
    void putdata()
    {
        cout<<"univercity:"<<uni<<endl<<"degree:"<<degree<<endl;
    }
};
class employee
{
    string name;
    int salary;
    public:
    void getdata()
    {
        cout<<"Enter the name and salaray"<<endl;
        cin>>name>>salary;
    }
    void putdata()
    {
        cout<<"name:"<<name<<endl<<"salary:"<<salary<<endl;
    }

};
class manaegr : private student,private employee
{
    public:
    void info()
    {
        student::getdata();
        employee::getdata();
    }
    void display()
    {
        student::putdata();
        employee::putdata();
    }
};
int main()
{
    manaegr m1;
    m1.info();
    m1.display();

    return 0;
}