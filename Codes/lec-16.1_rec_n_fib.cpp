//fibonacci sum using recursion
//https://www.geeksforgeeks.org/time-complexity-recursive-fibonacci-program/
#include<bits/stdc++.h>
using namespace std;

int fib(int n)
{
    if(n == 1)
        return 0;
    if (n==2)
        return 1;
    return fib(n-1) + fib(n-2);
}

int main()
{
    int n;
    cin>>n;
    cout<<fib(n)<<endl;
    return 0;
}
//T(n) = T(n-1) + T(n-2) + 1
//Time- O(2^n)
//Space- O(n) -> stack