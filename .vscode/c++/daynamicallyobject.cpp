#include<iostream>
using namespace  std;
class Employee
{
    int id;
    char name[30];
    float salaray;

    public:
    void getdata()
    {
        
        cin>>id>>name>>salaray;
    }
    void putdata()
    {
        cout<<name<<" "<<id<<" "<<salaray<<endl;
    }
    float getsalaray()
    {
        return salaray;
    }

};
int main()
{
    int n,i;
    cout<<"Enter the number of Employee"<<endl;
    cin>>n;
    Employee *p = new Employee[n];

    for(i=0;i<n;i++)
    {
        cout<<"Enter the detalis of"<<" "<<i+1<<" "<<"Employee"<<endl;
        p[i].getdata();
    }
    for(i=0;i<n;i++)
    {
        p[i].putdata();
    }

    float max = p[0].getsalaray();
    int maxindex=0;

    for(i=1;i<n;i++)
    {
        if(p[i].getsalaray() > max)
        {
            max = p[i].getsalaray();
            maxindex = i;
        }
    }

    cout<<"max salaray"<<max<<endl;
    p[maxindex].putdata();

    delete[] p;
    


    return 0;
}

