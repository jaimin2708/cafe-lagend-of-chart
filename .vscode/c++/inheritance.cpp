#include<iostream>
using namespace std;
class person
{
    protected:
    string name;
    int age;
    public:
    void input()
    {
        cout<<"Enetr the name and age"<<endl;
        cin>>name>>age;
    }

};
class student : private person
{
    int rollno;
    public:
    void getdata()
    {
        cout<<"Enter the rollno of students"<<endl;;
        cin>>rollno;
        input();
        
    }
    void display()
    {
        cout<<name<<" "<<age<<" "<<rollno<<endl;
    }
};
int main()
{
    student s1;
    s1.getdata();
    s1.display();
    return 0;
}