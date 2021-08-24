//https://www.geeksforgeeks.org/sum-of-all-subarrays/

#include<bits/stdc++.h>
using namespace std;

int main() {
	int n; //S(1)
	cin>>n; 
	int arr[n]; //S(n)
	for(int i=0; i<n;i++)
		cin>>arr[i]; //T(n)
	int sum; //S(1)
	for(int i=0;i<n;i++)
	{	sum = 0; //T(n) 
		for(int j=i;j<n;j++)
		{
			sum += arr[j]; // n(n+1)/2 -> T(n^2)
			cout<<i<<"->"<<j<<" "<<sum<<endl; // T(n^2)
		}
	}
	return 0;
}

//Time- T(n+n+n^2+n^2) = O(n^2) 
//Space- S(1+n+1) = O(n)
//Iterate through all subarrays and print sum of each