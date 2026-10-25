#include<iostream>
using namespace std;
class person
{
    string name;
    int age;
    public:
    void getdataA()
    {
        cout<<"Enter the name and age"<<endl;
        cin>>name>>age;
    }
    void putdataA()
    {
        cout<<"name:"<<name<<endl<<"age:"<<age<<endl;
    }
};
class student : public person
{
    int rollno;
    int std;
    public:
     void getdataB()
    {
        cout<<"Enter the rollnno and std"<<endl;
        cin>>rollno>>std;
    }
    void putdataB()
    {
        cout<<"rollno:"<<rollno<<endl<<"std:"<<std<<endl;
    }
    
};
class male : public student
{
    string gender;
    string bday;
    public:
    void getdataC()
    {
        cout<<"Enter the gender and birth date"<<endl;
        cin>>gender>>bday;
    }
    void putdataC()
    {
        cout<<"gender:"<<gender<<endl<<"birth date:"<<bday<<endl;
    }
};
int main()
{
    male m1;
    m1.getdataA();
    m1.getdataB(); 
    m1.getdataC();
    
    m1.putdataA();
    m1.putdataB();
    m1.putdataC();
    return 0;
}
