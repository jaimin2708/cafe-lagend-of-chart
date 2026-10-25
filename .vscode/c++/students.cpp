#include<iostream>
using namespace std;
class student
{
    private:
    int roll;
    string name;

    public:
    void getdata()
    {
        cout<<"ENter the roll number and name";
        cin>>roll>>name;
    }
    void display()
    {
        cout<<roll<<" "<<name<<" "<<endl;
    }


};
    
    void getin()
    {
        int roll;
        cout<<"ENter the roll number"<<endl;
        cin>>roll;
    }
int main()
{
    student s;
    getin();
    s.getdata();
    s.display();


    return 0;
}