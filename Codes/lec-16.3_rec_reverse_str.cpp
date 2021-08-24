//Reverse string using recursion

#include<bits/stdc++.h>
using namespace std;

void reverse(string s)
{
    if (s == "")
        return;
    reverse(s.substr(1));
    cout<<s[0];
}

int main()
{
    string str;
    cin>>str;
    reverse(str);
    return 0;
}
//T(n) = T(n-1) + 1
//Time- O(n^2) -> substr takes T(n) called n times
//Space- O(n^2) -> substr give n size string passed n times so take n size