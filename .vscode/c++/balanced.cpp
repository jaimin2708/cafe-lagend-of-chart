#include <iostream>
#include <string>
#include <stack>

using namespace std;

bool balancing(string s)
{
    stack<char> st;

    for(char c : s)
    {
        if(c == '(' || c == '[' || c == '{')
        {
            st.push(c);
        }    
        else
        {
            // No opening bracket available
            
            if(st.empty())
            {
                return false;
            }
            
            char top = st.top();  
            if((c == ')' && top == '(') ||
               (c == '}' && top == '{') ||
               (c == ']' && top == '['))
            {
                st.pop();
            }
            else
            {
                return false;
            }
        }
    }
    return st.empty();
}

int main()
{
    string s;

    cout << "Enter the string: ";
    cin >> s;

    if(balancing(s))
    {
        cout << "Balanced";
    }
    else
    {
        cout << "Not Balanced";
    }

    return 0;
}