//Remove all duplicates from string using Recursion
//https://www.geeksforgeeks.org/remove-duplicates-from-a-given-string/
//https://leetcode.com/problems/remove-duplicate-letters/


#include<bits/stdc++.h>
using namespace std;

string removeDup(string s)
{
    if (s.length() == 0)
        return "";

    string reststr = removeDup(s.substr(1));
    if(s[0] == reststr[0])
        return reststr;
    return s[0] + reststr;
}

int main()
{
    string s = "bcabc";
    sort(s.begin(), s.end());//T(nlogn)
    cout<<removeDup(s)<<endl; //T(n^2)
    return 0;
}
//T(n) = T(n-1) + 1
//Time- T(n^2 + nlogn) = T(n^2) -> substr takes T(n)
//Space- O(n^2)