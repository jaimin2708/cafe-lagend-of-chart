#include<iostream>
using namespace std;
#include<stack>
int main()
{
    int num;
    cout<<"Enter the number"<<endl;;
    cin>>num;
   stack<int> s;

   if(num == 0)
   {
    s.push(0);
   }

   while(num > 0)
   {
     int r = num % 2;
     s.push(r);
     num = num / 2;
   }

   cout<<"binary number"<<endl;

   while(!s.empty())
   {
    cout<<s.top();
    s.pop();
   }
    return 0;
}