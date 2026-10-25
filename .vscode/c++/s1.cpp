#include<iostream>
#include<string>
using namespace std;
int  main()
{
    string s1 = "jaimin";
    string s2 = "jaimin";

    if(s1 == s2)
    {
        cout<<"both string are equal"<<endl;;
    }
    else
    {
        cout<<"both string are not equal"<<endl;
    }
    if(s1 > s2)
    {
        cout<<"string s1 is greatest"<<endl;
    }
    else if(s2 > s1)
    {
        cout<<"string s2 is greatest"<<endl;
    }
    return 0;
}