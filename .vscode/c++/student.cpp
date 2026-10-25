#include<iostream>
using namespace std;
class student
{
    private:
    int roll;
    char name[20];
    float cpi;

    public:
    void add(){

        cout<<"Enter the roll number"<<endl;
        cin>>roll;
        cout<<"Enetr the name of three students"<<endl;
        cin>>name;
        
        cout<<"ENeytr the cpi"<<endl;
        cin>>cpi;
    }
    void display(){
        cout<<roll<<endl;
        cout<<name<<endl;
        cout<<cpi;

    }
    void change(){
        cout<<"Enter the roll number "<<endl;
        cin>>roll;
    }
};
    int main()
{
    student s1;
    s1.add();
    s1.display();
    s1.change();
    s1.display();



    return 0;
}