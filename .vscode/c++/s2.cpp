#include<iostream>
using namespace std;
void display(string &s){

    cout<<s.size()<<endl;
    cout<<s.length()<<endl;
    cout<<s.capacity()<<endl;
    cout<<s.max_size()<<endl;

}
int main()
{
        string str;
        cout<<"before intialisation"<<endl;
        display(str);

        cout<<"Enter the string";
        cin>>str;
        display(str);
        str.resize(30);
        cout<<"after resize"<<endl;
        display(str);





    return 0;
}