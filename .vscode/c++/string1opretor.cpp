#include<iostream>
#include<cstring>
using namespace std;
class add
{
    char str[100];
    public:
    add(char s[] = "")
    {
        strcpy(str,s);
    }
    add operator +(add s1)
    {
        add temp;
        strcpy(temp.str,str);
        strcat(temp.str,s1.str);

        return temp;

    }
    void display()
    {
        cout<<str<<endl;
    }
};
int main()
{
    add a1("hello");
    add a2(" jaimin");
    add a3;
    a3 = a1 + a2;
    a3.display();

    return 0;
}