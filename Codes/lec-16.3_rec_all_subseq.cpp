//Print all subsequences of string using recursion
//https://www.geeksforgeeks.org/print-subsequences-string/
//https://www.geeksforgeeks.org/print-subsequences-string-iterative-method/

#include<bits/stdc++.h>
using namespace std;

void subseq(string s, string ans)
{

    if(s.length() == 0)
    {
        cout<<ans<<endl;
        return;
    }
    string ros = s.substr(1);
    subseq(ros, ans);
    subseq(ros, ans + s[0]);
}

int main()
{
    string s = "abc";
    subseq(s, ""); //T(n)
    return 0;
}
//T(n) = 2T(n-1) + 1
//Time- T(2^n)
//Space- O(2^n) -> stack