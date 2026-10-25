#include<iostream>
using namespace std;
int main()
{
    string s1 = "hi my name is jaimin";
    int i;

    // for(i=0;i<s1.length();i++)
    // {
    //     cout<<s1.at(i);
    // }
    for(i=0;i<s1.length();i++)
    {
        cout<<s1[i];
    }
    cout<<endl;
    int x = s1.find("jaimin");
    //cout<<x;
    int y = s1.find_first_of('n');
    int z = s1.find_last_of('i');
    cout<<y<<" "<<z<<endl;
    cout<<s1.substr(3,4);
    return 0;
}