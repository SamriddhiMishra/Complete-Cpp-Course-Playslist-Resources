//n! using recursion
#include<bits/stdc++.h>
using namespace std;

int fact(int n)
{
    if(n ==1)
        return 1;
    return n * fact(n-1);
}

int main()
{
    int n;
    cin>>n;
    cout<<fact(n)<<endl;
    return 0;
}
//T(n) = T(n-1) +1
//Time- O(n)
//Space- O(n) -> stack