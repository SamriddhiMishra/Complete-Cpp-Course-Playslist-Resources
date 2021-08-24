//N-Queens Problem using backtracking
//https://www.geeksforgeeks.org/n-queen-problem-backtracking-3/
//https://www.geeksforgeeks.org/printing-solutions-n-queen-problem/

#include<bits/stdc++.h>
using namespace std;

bool isSafe(int** arr, int x, int y, int n)
{
    for(int row =0; row<x; row++)
    {
        if(arr[row][y] == 1)
            return false;
    }

    int row = x;
    int col =y;
    while(row>=0 && col>=0)
    {
        if(arr[row][col] == 1)
            return false;
        row--;
        col--;
    }

    row = x;
    col =y;
    while(row>=0 && col<n)
    {
        if(arr[row][col] == 1)
            return false;
        row--;
        col++;
    }

    return true;
}

bool nqueens(int** arr, int x, int n) //T(n)
{
    if(x >= n)
        return true;

    for(int col= 0; col<n; col++) //T(n)
    {
        if(isSafe(arr, x, col, n)) //T(3n)
        {
            arr[x][col] = 1;

            if(nqueens(arr, x+1, n))//T(n-1)
                return true;

            arr[x][col] = 0; //backtracking
        }
    }
    return false;
}
//T(n) = n*3n + T(n-1)

int main()
{
    int n;
    cin>>n;
    int** arr = new int*[n];
    for(int i=0;i<n;i++)
    {
        arr[i] = new int[n];
        for(int j=0;j<n;j++)
            arr[i][j]=0;
    }

    if(nqueens(arr, 0, n))
    {
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
                cout<<arr[i][j]<<" ";
            cout<<endl;
        }
    }

    return 0;
}
//T(n) = nT(n-1) + n^2
//Time- T(n^n) - Upper bound
//Space- O(n) - max stack at any time