#include<iostream>
using namespace std;
int main()
{
    int num1,num2;
    cout<<"Enter the two number";
    cin>>num1>>num2;

    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;

    cout<<"after the swaping number"<<endl;
    cout<<"num1:"<<num1<<" "<<"num2:"<<num2;




    return 0;
}