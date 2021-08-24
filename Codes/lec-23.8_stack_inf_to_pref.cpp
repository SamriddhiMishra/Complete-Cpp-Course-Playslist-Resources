//Infix to Prefix
//https://www.geeksforgeeks.org/convert-infix-prefix-notation/

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

string reverse(string s)
{
    int n = s.size();
    string res = "";
    for(int i=0;i<n;i++)
    {
        if(s[i] == '(')
            res = ')' + res;
        else if(s[i] == ')')
            res = '(' + res;
        else
            res = s[i] + res;
    }
    return res;
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
            if(s[i] != '^')
            {
                while(!st.empty() && prec(s[i]) < prec(st.top())) //while top has more precedence to the scanned operator in ^ more or equal
                {
                    res += st.top();
                    st.pop();
                }
            }
            else
            {
                while(!st.empty() && prec(s[i]) <= prec(st.top())) //while top has more precedence to the scanned operator in ^ more or equal
                {
                    res += st.top();
                    st.pop();
                }
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
    s = reverse(s);
    s = inf_to_post(s);
    cout<<reverse(s)<<endl;

    return 0;
}