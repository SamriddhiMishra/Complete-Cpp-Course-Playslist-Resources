//Check if arr is sorted using recursion

#include<bits/stdc++.h>
using namespace std;

bool sorted(int arr[], int n)
{
    if(n == 1)
        return true;
    bool restArray = sorted(arr+1,n-1);
    return (arr[0] <arr[1] && restArray);
}

int main()
{
    int arr[] = {1,6,3,4};
    int n = 4;
    cout<<sorted(arr, n)<<endl;
    return 0;
}
//T(n) = T(n-1) + 1
//Time- O(n)
//Space- O(n) -> stack