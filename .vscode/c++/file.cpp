#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream out("ITEM");
    out<<"hello my name is jaimin bhensdadiya"<<endl;
    out<<"hiii i am the currently studay in DDU university"<<endl;


    out.close();

    ifstream in("ITEM");

    string s1;
    int c=0;
    while(getline(in,s1))
    {
        c++;
        cout<<s1<<endl;
        
    }
    cout<<c<<endl;

    in.close();
    


    return 0;
}