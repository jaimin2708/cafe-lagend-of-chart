#include<iostream>
using namespace std;
int main()
{
    
    try
    {
        throw 10;
    }
    catch(double i)
    {
        cout<<"first catch"<<endl;;
        
    }
    catch(int r)
    {
        cout<<"second catch";
    }
    
    return 0;
}