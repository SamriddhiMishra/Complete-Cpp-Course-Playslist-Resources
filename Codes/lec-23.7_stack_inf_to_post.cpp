//Infix to Postfix
//https://www.geeksforgeeks.org/stack-set-2-infix-to-postfix/

#include<bits/stdc++.h>
using namespace std;

int prec(char c)//gives precedence
{
    if(c == '^')
        return 3;
    else if(c == '*' || c == '/')
        return 2;
    else if(c == '+' || c== '-')
        return 1;
    else
        return -1;
}

string inf_to_post(string s)
{
    string res = "";
    stack<int> st;
    int n = s.size();
    
    for(int i=0;i<n;i++)
    {
        if((s[i] >='a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
            res+=s[i];
        else if(s[i] == '(')
            st.push(s[i]);
        else if(s[i] == ')')
        {
            while(st.top() != '(')
            {
                res += st.top();
                st.pop();
            }
                st.pop();
        }
        else
        {
            while(!st.empty() && prec(s[i]) <= prec(st.top())) //while top has more or equal precedence to the scanned operator
            {
                res += st.top();
                st.pop();
            }
            st.push(s[i]);
        }
    }
    while(!st.empty())
    {
        res += st.top();
        st.pop();
    }
    return res;
}//T(n)

int main()
{
    string s= "(a-b/c)*(a/k-l)";

    cout<<inf_to_post(s)<<endl;

    return 0;
}