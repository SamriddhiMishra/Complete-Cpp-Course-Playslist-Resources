//Generate all permutations in array using recursion, distinct elements
//https://www.geeksforgeeks.org/write-a-c-program-to-print-all-permutations-of-a-given-string/
//https://www.geeksforgeeks.org/time-complexity-permutations-string/


#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> ans;

void permute(vector<int> a, int idx) //if duplicate elements gives duplicate permutations
{
    if(idx == a.size())
    {
        ans.push_back(a);
        return;
    }

    for(int i=idx; i<a.size();i++)
    {
        swap(a[idx], a[i]);
        permute(a, idx+1);
        swap(a[idx], a[i]);
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

    permute(a, 0);

    for(int i=0;i<ans.size();i++)
        {
            for(int j=0;j<n;j++)
                cout<<ans[i][j]<<" ";
            cout<<endl;
        }

    cout<<endl;
    //STL Trick,if duplicate elements still gives unique permutations
    vector<vector<int>> ans2;
    sort(a.begin(), a.end());
    do{
        ans2.push_back(a);
    }
    while(next_permutation(a.begin(), a.end())); //T(n!)

    for(int i=0;i<ans2.size();i++)
        {
            for(int j=0;j<n;j++)
                cout<<ans2[i][j]<<" ";
            cout<<endl;
        }

    return 0;
}



//Using Recursion
//T(n) = nT(n-1) + 1
//Time- T(n*n!)
//Space- O(n * n) -> max stack is n , and for eack func call store n size str