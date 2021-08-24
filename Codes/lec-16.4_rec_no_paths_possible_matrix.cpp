//Count number of paths possible in a matrix where can move either to right or down, (0,0) to (n-1,n-1)
//https://www.geeksforgeeks.org/count-possible-paths-top-left-bottom-right-nxm-matrix/
//https://www.geeksforgeeks.org/print-all-possible-paths-from-top-left-to-bottom-right-of-a-mxn-matrix/

#include<bits/stdc++.h>
using namespace std;

int countPathsMaze(int n, int i, int j)
{
    if(i== n-1 && j==n-1)
        return 1;
    if (i > n-1 || j> n-1)
        return 0;

    return countPathsMaze(n, i+1, j) + countPathsMaze(n, i, j+1);
}

int main()
{
    int n;
    cin>>n;
    cout<<countPathsMaze(n, 0, 0)<<endl;
    return 0;
}
//T(n) = 2T(n-1) + 1
//Time- T(2^n)
//Space- O(2^n)