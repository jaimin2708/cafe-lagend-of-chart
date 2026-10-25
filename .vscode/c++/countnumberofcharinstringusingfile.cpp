#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream out("string.txt");
    
    string s1;
    cout<<"Enter the string s1"<<endl;
    getline(cin,s1);
    out<<s1<<endl;

    out.close();

    ifstream in("string.txt");

    int count=0;
    int capital=0;
    string str1;
    int i=0;
    while(getline(in,str1))
    {
        for(i=0;i<str1.length();i++)
        {
        if(str1[i] >= 'a' && str1[i] <= 'z')
        {
            count++;
        }
        else if(str1[i] >= 'A' && str1[i] <= 'Z')
        {
            capital++;
        }
    }
    }
    cout<<count<<endl;
    cout<<capital<<endl;
    in.close();

    return 0;
}