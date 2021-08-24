//Friends Pairing Problem using recursion
//https://www.geeksforgeeks.org/friends-pairing-problem/
//https://www.geeksforgeeks.org/time-complexity-recursive-fibonacci-program/

#include<bits/stdc++.h>
using namespace std;

int friendsPairingProb(int n)
{
    if(n == 0 || n == 1 || n==2)
        return n;
    return friendsPairingProb(n - 1) + friendsPairingProb(n -2)*(n-1);
}

int main()
{
    int n;
    cin>>n;
    cout<<friendsPairingProb(n)<<endl;
    return 0;
}
//T(n) = T(n-1) + (n-1)*T(n-2) -> Similar to 2T(n-1) + 1
//Time- T(2^n) -> its recursion not dp hence won't be O(n)
//Space- O(2^n)