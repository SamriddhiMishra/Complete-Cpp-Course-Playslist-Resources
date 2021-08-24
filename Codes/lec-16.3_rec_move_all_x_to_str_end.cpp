//Move all x to end of string using recursion
//https://www.geeksforgeeks.org/move-all-occurrence-of-letter-x-from-the-string-s-to-the-end-using-recursion/


#include<bits/stdc++.h>
using namespace std;

string movex(string s, string newstr)
{
    if (s.length() == 0)
        return newstr;

    if(s[0] == 'x')
        newstr += 'x';
    newstr = movex(s.substr(1), newstr);
    if(s[0] != 'x')
        return s[0] + newstr;
    return newstr;
}

int main()
{
    string s = "xxbsxxscxabxc";
    cout<<movex(s,"")<<endl; //T(n)
    return 0;
}
//T(n) = T(n-1) + 1
//Time- T(n^2)
//Space- O(n^2)