//Generate all unique permutations in array even if duplicate elements
//While swapping avoid duplicates
//https://www.geeksforgeeks.org/distinct-permutations-string-set-2/
//https://www.geeksforgeeks.org/print-all-permutations-of-a-string-with-duplicates-allowed-in-input-string/
//https://www.geeksforgeeks.org/print-all-possible-permutations-of-an-array-with-duplicates-using-backtracking/

#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> ans;

void permute(vector<int> a, int idx)
{
    if(idx == a.size())
    {
        ans.push_back(a);
        return;
    }

    for(int i=idx; i<a.size();i++)
    {
        if(i != idx && a[i] == a[idx])
            continue;
        swap(a[idx], a[i]);
        permute(a, idx+1);
    }
    return;
}

int main()
{
    int n,k;
    cin>>n;
    vector<int>  a;

    for(int i=0;i<n;i++)
    {
        cin>>k;
        a.push_back(k);
    }
    sort(a.begin(), a.end());
    permute(a, 0);

    for(int i=0;i<ans.size();i++)
        {
            for(int j=0;j<n;j++)
                cout<<ans[i][j]<<" ";
            cout<<endl;
        }

    return 0;
}

//Using Recursion
//T(n) = nT(n-1) + 1
//Time- T(n*n!)
//Space- O(n * n) -> max stack is n , and for eack func call store n size str
//Testacses -
//3
//1 2 3

//3
//1 2 1

//3
//1 2 2