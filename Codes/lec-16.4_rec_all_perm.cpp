//Print all permutations of string using recursion
//https://www.geeksforgeeks.org/write-a-c-program-to-print-all-permutations-of-a-given-string/
//https://www.geeksforgeeks.org/time-complexity-permutations-string/

#include<bits/stdc++.h>
using namespace std;

void permute(string s, string ans)
{

    if(s.length() == 0)
    {
        cout<<ans<<endl;
        return;
    }
    for(int i=0;i<s.size();i++)
    {
        char c = s[i];
        string ros = s.substr(0,i) + s.substr(i+1);
        permute(ros, ans + c);
    }
}

int main()
{
    string s = "abc";
    permute(s, "");
    return 0;
}
//T(n) = nT(n-1) + 1
//Time- T(n*n!)
//Space- O(n * n) -> max stack is n , and for eack func call store n size str