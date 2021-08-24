//Tiling Problem
//Given 2xn board and tile of size 2x1 count no of ways to tile the given board using tiles.
//https://www.geeksforgeeks.org/tiling-problem/

#include<bits/stdc++.h>
using namespace std;

int tilingWays(int n)
{
    if(n == 0)
        return 0;
    if (n == 1)
        return 1;
    return tilingWays(n - 1) + tilingWays(n -2);
}

int main()
{
    int n;
    cin>>n;
    cout<<tilingWays(n)<<endl;
    return 0;
}
//T(n) = 2T(n-1) + 1
//Time- T(2^n)
//Space- O(2^n)