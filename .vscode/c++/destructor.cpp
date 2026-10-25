#include<iostream>
using namespace std;
class student
{
    int a,b;
    public:
    // student()
    // {
    //      a = b = 0;
    // }
    student(int m,int n)
    {
        a = m;
        b = n;        
    }
    void display()
    {
        cout<<a<<" "<<b<<endl;
    }
    ~student()
    {
        cout<<a<<" "<<b<<endl;
    }



};
int main()
{
    student s1(56,78);
    s1.display();
    return 0;
}