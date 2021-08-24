//Print n to 1 using recursion

#include<bits/stdc++.h>
using namespace std;

void dec(int n)
{
    if(n == 0)
        return;
    cout<<n<<endl;
    dec(n-1);
}

void inc(int n)
{
    if(n == 0)
        return;
    inc(n-1);
    cout<<n<<endl;
}

int main()
{
    int n;
    cin>>n;
    dec(n);
    inc(n);
    return 0;
}
//T(n) = T(n-1) + 1
//Time- O(n)
//Space- O(n) -> stack