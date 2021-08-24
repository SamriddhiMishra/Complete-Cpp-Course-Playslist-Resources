//Print all possible words formed using phone number

#include<bits/stdc++.h>
using namespace std;

string keypadArr[] = {"", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
void words(string s, string ans)
{

    if(s.length() == 0)
    {
        cout<<ans<<endl;
        return;
    }

    char c = s[0];
    string ros = s.substr(1);
    string a = keypadArr[c-48];

    for(int i=0;i<a.size();i++)
    {
        words(ros, ans + a[i]);
    }
    
}

int main()
{
    string s = "12";
    words(s, ""); //T(n)
    return 0;
}
//T(n) = 4T(n-1) + 1
//Time- T(4^n)
//Space- O(1)