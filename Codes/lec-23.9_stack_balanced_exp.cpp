//Check Balanced Paranthesis exp
//https://www.geeksforgeeks.org/check-for-balanced-parentheses-in-an-expression/
//https://www.geeksforgeeks.org/cost-balance-parantheses/
//https://leetcode.com/problems/valid-parentheses/
//https://www.geeksforgeeks.org/minimum-number-of-bracket-reversals-needed-to-make-an-expression-balanced/
//https://www.geeksforgeeks.org/minimum-number-of-bracket-reversals-needed-to-make-an-expression-balanced-set-2/
//https://www.geeksforgeeks.org/minimum-swaps-bracket-balancing/

#include<bits/stdc++.h>
using namespace std;

bool check_bal_paren(string s)
{
    int n = s.size();
    stack<char> st;
    for(int i=0;i<n;i++)
    {
        if(s[i] == '(' || s[i] == '{' || s[i] == '[')
            st.push(s[i]);
        else
        {
            if(st.empty() || (s[i] == ')' && st.top() != '(') || (s[i] == '}' && st.top() != '{') ||(s[i] == ']' && st.top() != '['))
                return false;
            st.pop();
        }
    }
    if(st.empty())
        return true;
    return false;
}//T(n)

int main()
{
    string s= "[{}]";

    cout<<check_bal_paren(s)<<endl;

    return 0;
}