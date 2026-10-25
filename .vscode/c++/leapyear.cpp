#include<iostream>
using namespace std;
int main()
{
    int year;
    cout<<"Enetr the year";
    cin>>year;

    if(year % 4 ==0)
    {

        cout<<"your input year is an leap year";
    }
    else{
        cout<<"your input year is not an leap year";
    }




    return 0;
}