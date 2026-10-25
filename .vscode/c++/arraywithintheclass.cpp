#include<iostream>
using namespace std;
class student
{
    string name;
    int roll;
    int clas;
    string sub;
    
    public:
    void getdata()
    {
        cout<<"Enter the name and roll number class and subject name also"<<endl;

        cin>>name>>roll>>clas>>sub;
    }
    void putdata()
    {
        cout<<name<<endl<<roll<<endl<<clas<<endl<<sub<<endl;
    }
};
int main()
{
    student s1;
    s1.getdata();
    s1.putdata();
    return 0;
}