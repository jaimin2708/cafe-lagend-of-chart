#include<iostream>
using namespace std;
#include<stack>
void postfix(string str)
{
    stack <char> s1;
    string postfix = " ";

    for(char ch = str)
    {
        if(isalpha(ch))
        {
            postfix = ch;
        }
        else if(ch == '(')
        {
            s1.push(ch);
        }
        else if(ch == ')')
        {
            while(!s1.empty() && s1.top == '(')
            {
                postfix += s1.top();
                s1.pop();
            }
            s1.pop();
        }
        else
        {
            while(!s1.empty() && precedence(s1.top) > )
        }
    }
}
int main()
{
    string s1;
    cout<<"Enter the string";
    cin>>s1;
    return;
}