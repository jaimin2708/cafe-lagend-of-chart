#include<iostream>
using namespace std;
#include<fstream>
int main()
{
    ofstream out1("state");
    out1<<"Gujarat"<<endl;
    out1<<"kerela"<<endl;
    out1<<"chennai"<<endl;

    out1.close();

    ofstream out2("district");
    out2<<"jamnagar"<<endl;
    out2<<"rajkot"<<endl;
    out2<<"surat"<<endl;

    out2.close();
    cout<<"file open"<<endl;
    ifstream in1("state");
    string s1;
    while (getline(in1,s1))
    {
        cout<<s1<<endl;
    }
    in1.close();

    ifstream in2("district");
    while (getline(in2,s1))
    {
        cout<<s1<<endl;
    }
    in2.close();
}