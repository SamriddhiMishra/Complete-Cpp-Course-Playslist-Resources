//Rat in a maze using backtracking
//https://www.geeksforgeeks.org/rat-in-a-maze-backtracking-2/

#include<bits/stdc++.h>
using namespace std;
int n;
bool ratpath(int** arr, int** ans, int i, int j)
{

    if(i>=n || j>=n || arr[i][j] == 0)
        return false;

    if(i == n-1 && j== n-1)
        { ans[i][j] = 1; return true;}

    ans[i][j] =1; //mark and continue with both solutions

    if(ratpath(arr, ans, i+1, j) || ratpath(arr, ans, i, j+1))
        return true;
    
    ans[i][j] = 0; //backtracking

    return false;
}

int main()
{
    cin>>n;
    int** arr = new int*[n]; //dynamic memory allocation
    for(int i=0;i<n;i++)
        arr[i] = new int[n];

    int** ans = new int*[n];
    for(int i=0;i<n;i++)
        ans[i] = new int[n];

    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            cin>>arr[i][j];

    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            ans[i][j] = 0;

    cout<<ratpath(arr, ans, 0, 0)<<endl;

    for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
                cout<<ans[i][j]<<" ";
            cout<<endl;
        }

    return 0;
}
//T(n) = 2T(n-1) + 1
//Time- T(2^n)
//Space- O(2^n)