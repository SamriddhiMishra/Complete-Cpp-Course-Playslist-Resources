//Number appear only single time while others present twice, find the single number
//https://leetcode.com/problems/single-number/

#include<bits/stdc++.h>
using namespace std;

int xorsum(int arr[], int n)
{
    int xorsum=0;
    for(int i=0;i<n;i++)
    {
	    xorsum ^= arr[i];
    }
    return xorsum;
} //T(n*2^n)

int main()
{

	int arr[] = {1,1,2,3,3};
	cout<<xorsum(arr, 5)<<endl;

	return 0;
}