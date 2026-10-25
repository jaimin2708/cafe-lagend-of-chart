#include<iostream>
using namespace std;
void display(int x)
{
    try
    {
        if(x==1)
        {
            throw 10;
        }
        else if(x==2)
        {
            throw 'A';
        }
        else if(x==3)
        {
            throw 3.14f;
        }
        else
        {
            cout<<"your Enter the number is not in 1 2 3 "<<endl;
        }
    }
    catch(int a)
    {
        cout<<"your int is :"<<a<<endl;
    }
    catch(char a)
    {
        cout<<"your char is :"<<a<<endl;
    }
    catch(float a)
    {
        cout<<"your float is :"<<a<<endl;
    }
    

}
int main()
{
    cout<<"1 for interger"<<endl<<"2 for characters"<<endl<<"3 for float value"<<endl;
    int choise;
    cout<<"Enter the appropriate number"<<endl;
    cin>>choise;
    display(choise);
}