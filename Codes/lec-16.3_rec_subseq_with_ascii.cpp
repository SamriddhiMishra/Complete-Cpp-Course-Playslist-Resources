//Print all subsequences of string with ascii using recursion

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
    subseq(ros, ans + to_string(int(s[0])));
}

int main()
{
    string s = "AB";
    subseq(s, "");
    return 0;
}
//T(n) = 3T(n-1) + 1
//Time- T(3^n)
//Space- O(1)