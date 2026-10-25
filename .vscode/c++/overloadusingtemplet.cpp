#include<iostream>
using namespace std;
template<class T>
void show(T x)
{
    cout<<"templet function"<<x<<endl;
}
void show(int x)
{
    cout<<"explicit function"<<x<<endl;
}
int main()
{
    show(100);
    show(12.5);
    show('j');

    return 0;
}
