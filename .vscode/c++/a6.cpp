#include <iostream>
using namespace std;
class base
{
protected:
    char name[30];
    int age;

public:
    base(char *s, int a)
    {
        strcpy(name, s);
        age = a;
    }
    virtual void display()
    {
    }
};
class derived : public base
{
    int clas;

public:
    derived(char *s, int a, int c) : base(s, a)
    {
        clas = c;
    }
    void display();
};
void derived : display()
{
    cout << name << endl;
    cout << age << endl;
    cout << clas << endl;
}
int main()
{

    return 0;
}