#include<iostream>
using namespace std;
class base 
{
    protected:
    int roll;
    public:
    void getdata()
    {
        cout<<"Enter the roll number"<<endl;;
        cin>>roll;
    }
    void putdata()
    {
        cout<<"Roll number:"<<roll<<endl;
    }
};
class marks : virtual public base
{
    protected:
    int m1,m2;
    public:
    void getmarks()
    {
        cout<<"Entre the marks of two subject"<<endl;
        cin>>m1>>m2;
    }
    void putmarks()
    {
        cout<<"m1:"<<m1<<endl<<"m2:"<<m2<<endl;
    }
};
class sports : virtual public base
{
    protected:
    int score;
    public:
    void getscore()
    {
        cout<<"Enetr the score"<<endl;;
        cin>>score;
    }
    void putscore()
    {
        cout<<"score:"<<score<<endl;
    }
};
class total : public sports,public marks
{
    int total;
    public:
    
    
    void jaimin()
    {
        getdata();
        getmarks();
        getscore();
        total = score + m1 + m2;
    }
    void display()
    {
        putdata();
        putmarks();
        putscore();
           cout<<"total:"<<total<<endl;
    }
 
};
int main()
{
    total t1;;
    t1.jaimin();
    t1.display();

    return 0;
}