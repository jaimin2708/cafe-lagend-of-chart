#include<iostream>
using namespace std;
int main()
{
    int num1,num2,num3;               
    cout<<"Enetr the three number "; 
    cin>>num1>>num2>>num3;

    if(num1 > num2 && num1 > num3)
    {
        cout<<num1<<" "<<"is greater the numebr";
    }
     else if(num2 > num1 && num2 > num3)
    {
        cout<<num2<<" "<<"is greater the numebr";
    }
    else if(num3 > num1 && num3 > num2)
    {    
        cout<<num3<<" "<<"is greater the numebr";
    }                                                 
    


                                                              

    return 0;
}