//Prefix Expression Evaluation
//https://www.geeksforgeeks.org/evaluation-prefix-expressions/

#include<bits/stdc++.h>
using namespace std;

void print(stack<int> st)
{
    while(!st.empty())
    {
        cout<<st.top()<<endl;
        st.pop();
    }
    cout<<endl;
}

int eval(int a, int b, char c)
{
    switch(c)
    {
        case '+' : return a+b;
        case '-' : return a-b;
        case '*' : return a*b;
        case '/' : return a/b;
        case '^' : return pow(a,b);
    }
}

void pref_eval(string s)
{
    stack<int> st;
    int n = s.length(); int a,b;
    for(int i=n-1;i>=0;i--)
    {
        if(s[i] >= '0' && s[i] <='9')
            st.push(s[i]-'0');
        else
        {
            a = int(st.top());
            st.pop();
            b = int(st.top());
            st.pop();
            st.push(eval(a,b,s[i]));

        }
    }
    cout<<st.top()<<endl;
}//T(n)

int main()
{
    string s= "-+7*45+20";

    pref_eval(s);

    return 0;
}