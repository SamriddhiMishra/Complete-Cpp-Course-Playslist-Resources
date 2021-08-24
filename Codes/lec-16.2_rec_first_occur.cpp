//First occurrence of a number using recursion

#include<bits/stdc++.h>
using namespace std;

int firstocc(int arr[], int n, int i, int key)
{
    if(i == n)
        return -1;
    if(arr[i] == key)
        return i;
    firstocc(arr, n, i+1, key);
}

int lastocc(int arr[], int n, int i, int key)
{
    if(i == n)
        return -1;
    int restArray = lastocc(arr, n, i+1, key);
    if(restArray != -1)
        return restArray;
    if(arr[i] == key)
        return i;
    return -1;
}

int main()
{
    int arr[]= {1,2,3,2};
    int n =4;
    cout<<firstocc(arr, n, 0, 5)<<endl;
    cout<<lastocc(arr, n, 0, 5)<<endl;
    return 0;
}
//T(n) = T(n-1) + 1
//Time- O(n)
//Space- O(n) -> stack