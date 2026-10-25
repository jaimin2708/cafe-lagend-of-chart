#include<iostream>
using namespace std;
#include<stack>
void postfix(string s1)
{
    stack<char> s1;
    string postfix = " ";

    for(char c : s1)
    {
      if(isalpha(c))
      {
        postfix = c;
      }
      else if(c == '(')
      {
        s1.push(c);
      }
      else if(c == ')')
      {
        while(s1.top != '(')
        {
            postfix += s1.top();
            s1.pop();
        }
        s1.pop();
      }
      else
      {
        while(!s1.empty() && preceden)
      }
    }
}
int main()
{
    string s;
    cout<<"Enter the string"<<endl;;
    cin>>s;

}