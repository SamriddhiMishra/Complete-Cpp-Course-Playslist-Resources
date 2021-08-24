//Tower of Hanoi using Recursion
//https://www.geeksforgeeks.org/c-program-for-tower-of-hanoi/
//https://www.geeksforgeeks.org/time-complexity-analysis-tower-hanoi-recursion/

#include<bits/stdc++.h>
using namespace std;

void toh(int n, int src, int dest, int helper)
{
    if ( n == 0 )
        return;
    toh(n-1, src, helper, dest);
    cout<<"Move from "<<src<<" to "<<dest<<endl;
    toh(n-1, helper, dest, src);
}

int main()
{
    toh(4, 1, 3, 2);
    return 0;
}
//T(n) = 2T(n-1) + 1, T(1) = 1
//Time- O(2^n)
//Space- O(1)