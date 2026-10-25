#include<iostream>
using namespace std;
class sample
{
    int x;
    static int y;

    public:
    void set(int a)
    {
        y = y + a;
        x = y<<3;
    }
    void show()
    {
        cout<<x<<endl;
    }
    static void showY()
    {
        cout<<y<<endl;
    }
};
int sample::y=3;
int main()
{
    sample obj1;
    obj1.set(3);
    obj1.show();
    sample::showY();

     sample obj2;
    obj1.set(5);
    obj1.show();
    sample::showY();

     sample obj3;
    obj1.set(5);
    obj1.show();
    sample::showY();

    



    return 0;
}

 

