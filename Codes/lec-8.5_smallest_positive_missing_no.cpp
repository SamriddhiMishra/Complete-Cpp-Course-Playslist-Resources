//https://leetcode.com/problems/first-missing-positive/

#include<bits/stdc++.h>
using namespace std;

int smallest_pos(int arr[], int n)
{
	bool a[n]; //S(n)
	fill_n(a,n,false); //T(n)
	for(int i=0;i<n;i++)
	{
		if(arr[i] >= 0) //T(n)
			a[arr[i]] = true; //T(n)
	}
	for(int i=0;i<n;i++)
	{
		if(a[i] == 0) //T(n)
			return i; //T(1)
	}
	return -1; //T(1)
}
//T(n + n + n + n + 2) = T(n)
// S(n)


int main() {
	int n; //S(1)
	cin>>n; 
	int arr[n]; //S(n)
	for(int i=0;i<n;i++)
		cin>>arr[i];
	cout<<smallest_pos(arr,n)<<endl; //T(n), S(n)

	return 0;
}
//Time- T(n+n) = O(n)
//Space- S(1+n+n) = O(n)
//Use a freq array and iterate it to find the smallest missing int