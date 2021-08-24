//Replace pi in string with 3.14
//https://www.geeksforgeeks.org/recursive-program-to-replace-all-occurrences-of-pi-with-3-14-in-a-given-string/
//https://www.geeksforgeeks.org/replace-all-occurrences-of-pi-with-3-14-in-a-given-string/

#include<bits/stdc++.h>
using namespace std;

void replace(string s, string newstr)
{

    if(s.length() <= 1)
    {
        newstr = newstr + s[0];
        cout<<newstr<<endl;
        return;
    }
    
    if(s[0] == 'p' && s[1] == 'i')
    {
        newstr = newstr + "3.14";
        replace(s.substr(2), newstr);
    }
    else
    {
        char c = s[0];
        newstr = newstr + c;
        replace(s.substr(1), newstr);
        
    }
}

int main()
{
    string str;
    cin>>str;
    replace(str,"");
    return 0;
}
//T(n) = T(n-1) + 1
//Time- O(n^2)
//Space- O(n^2)