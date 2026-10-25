#include<iostream>
using namespace std;
class person
{
    protected:
    string name;
    string city;
    public:
    void getdata()
    {
        cout<<"Enter the name and city"<<endl;
        cin>>name>>city;
    }
    void putdata()
    {
        cout<<"name:"<<name<<endl<<"city:"<<city<<endl;
    }
};
class student : public person
{
    protected:
    int roll;
    int m1,m2;
    public:
    void getdata()
    {
        cout<<"Enter the student rollno. and also add to subject marks"<<endl;
        cin>>roll>>m1>>m2;
    }
    void putdata()
    {
        cout<<"rollnumber:"<<endl<<"m1:"<<m1<<endl<<"m2:"<<m2<<endl;    
    }    
};
class collage
{
    protected:
    string uni;
    string branch;
    public:
    void getdata()
    {
        cout<<"Enter the univercity name and branch "<<endl;
        cin>>uni>>branch;
    }
    void putdata()
    {
        cout<<"univercity:"<<uni<<endl<<"branch:"<<branch<<endl;
    }
    
};
class derived : public student,public collage
{
    protected:
    int total;
    public:
    void getdata()
    {
        person::getdata();
        student::getdata();
        collage::getdata();
        total = m1 + m2;

    }
    void putdata()
    {
        person::putdata();
        student::putdata();
        collage::putdata();
        cout<<"total:"<<total<<endl;
    }

};
int main()
{
    derived d1;
    d1.getdata();
    d1.putdata();

    return 0;
}