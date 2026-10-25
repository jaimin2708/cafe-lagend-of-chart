#include <iostream>
using namespace std;
int add(int a, int b)
{
    return a + b;
}
double add(double a, int b)
{
    return a * b;
}
float add(float a, float b)
{           
     return a + b;
}
int main()
{                               
    cout << add(10,20) << endl;
    cout << add(10.4,20.4) << endl;
    cout << add(10.5,20.6) << endl;

    return 0; 
}