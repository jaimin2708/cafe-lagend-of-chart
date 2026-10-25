#include<iostream>
using namespace std;
int main()
{
    string str1 = "Knowledge";
    string str2 = "power";
    string str3 = "is";

    string n1;
    n1 = str1 + " " + str2;
    cout<<n1<<endl;

    n1 = n1.insert(10,str3);
    cout<<n1<<endl;

    n1 = n1.replace(0,9,"wisdom");
    cout<<n1<<endl;
    int c;

    for(int i=0;i<n1.length();i++)
    {
            if(n1[i] == '\0')
            {
                c++;
            }

    }
    cout<<c<<endl;

    return 0;
}