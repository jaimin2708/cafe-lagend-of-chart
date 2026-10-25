#include <iostream>
using namespace std;
class student
{
    char name[30];
    int std;
    int roll;

public:
    void getdata()
    {
        cout << "Enter the name std and roll number" << endl;
        ;
        cin >> name >> std >> roll;
    }
    void putdata()
    {
        cout << "name:" << name << endl;
        cout << "std:" << std << endl;
        cout << "roll number:" << roll << endl;
    }
};
class marks : protected student
{
    int m1, m2, m3;

public:
    void input()
    {
        cout << "Entre the marks of 3 subject" << endl;
        cin >> m1 >> m2 >> m3;
    }
    void output()
    {
        cout << "marks 1:" << m1 << endl;
        ;
        cout << "marks 2:" << m2 << endl;
        cout << "marks 3:" << m3 << endl;
    }
    int returnA()
    {
        return m1;
    }
    int returnB()
    {
        return m2;
    }
    int returnC()
    {
        return m3;
    }
};
class total : protected marks
{
    int t;

public:
    void display()
    {
        getdata();
        input();
        putdata();
        output();
        t = returnA() + returnB() + returnC();
        cout << "total:" << t << endl;
    }
};
int main()
{
     total t1;
     t1.display();
}