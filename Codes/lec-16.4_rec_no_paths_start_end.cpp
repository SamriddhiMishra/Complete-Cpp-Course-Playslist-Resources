//Print number of paths from start to end using recursion

#include<bits/stdc++.h>
using namespace std;

int paths(int s, int e)
{
    if(e == s)
        return 1;
    else if (e<s)
        return 0;
    return paths(s, e-1) + paths(s, e-2) + paths(s, e-3) + paths(s, e-4) + paths(s, e-5) + paths(s, e-6);
}

int main()
{
    int s, e;
    cin>>s>>e;
    cout<<paths(s, e)<<endl;
    return 0;
}
//T(n) = 6T(n-1) + 1
//Time- T(6^n) -> T(2^n)
//Space- O(2^n)