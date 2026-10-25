#include<iostream>
using namespace std;
class word
{
    public:
   virtual void show()
    {
        cout<<"the function called is word class function"<<endl;;
    }
};
class jaimin : public word
{
    public:
    void display()
    {
        cout<<"jaimin"<<endl;;
    }
    void show()
    {
        cout<<"the function called is jaimin class function"<<endl;;
    }
};
int main()
{
    jaimin j;
    j.show();
    j.display();
    return 0;
}