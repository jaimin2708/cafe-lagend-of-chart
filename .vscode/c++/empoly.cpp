#include<iostream>
using namespace std;
class empolyee
{
    char name[100];
    char city[100];
    float salary;
    float da;
    float hra;
    float total;

    public:
    void getdata()
    {
        cout<<"Enter the name"<<endl;
        cin>>name;
        cout<<"ENter the city"<<endl;
        cin>>city;
        cout<<"Enter the salaray"<<endl;
        cin>>salary;
        cout<<"Enter the da"<<endl;
        cin>>da;
        cout<<"Enter the hra"<<endl;
        cin>>hra;
    }
    void calculate()
    {
        total = salary + salary * ( da / 100) + salary *(hra / 100);
        cout<<"The total is:"<<total;
    }
    void display()
    {
         cout<<name<<endl;
         cout<<city<<endl;
         cout<<salary<<endl;
         cout<<da<<endl;
         cout<<hra<<endl;
         
    }
};
int main()
{
    empolyee s;
    s.getdata();
    s.display();
    s.calculate();
    return 0;
}