//Find subarray with maximum sum
//Three approaches- 1) Brute Force- O(n^3) 2)Cumulative sum approach-O(n^2) 3) Kadane's Algo- O(n) 
//https://www.geeksforgeeks.org/largest-sum-contiguous-subarray/
//https://leetcode.com/problems/maximum-subarray/
#include<bits/stdc++.h>
using namespace std;

int brute_sum(int arr[], int n)
{
	int maxi= INT_MIN;
	for(int i=0;i<n;i++)
	{
		for(int j=i;j<n;j++)
		{
			int sum=0;
			for(int k=i;k<=j;k++)
			{
				sum+=arr[k];
				//cout<<arr[k]<<" ";
			}
			//cout<<endl;
			maxi = max(maxi, sum);
		}
	}
	return maxi; //T(1)
}//T(n*n*n) = T(n^3)
// S(2)
int cum_sum(int arr[], int n)
{
	int maxi= INT_MIN, a[n], sum;
	a[0] = arr[0];
	for(int i=1;i<n;i++)
		a[i] = a[i-1] + arr[i];
	for(int i=0;i<n;i++)
	{
		for(int j=i;j<n;j++)
		{
			if(i==0)
				sum = a[j];
			else
				sum= a[j]- a[i-1];
			maxi = max(maxi, sum);
		}
	}
	return maxi;
}//T(n*n) = T(n^2)
// S(n+3)

int kadane(int arr[], int n)
{
	int maxi= INT_MIN, sum=0;
	for(int i=0;i<n;i++)
	{
		sum+=arr[i];
		if(sum<0)
			sum=0;
		maxi = max(maxi, sum);
	}
	return maxi;
}//T(n) = T(n)
// S(2)

int main() {
	int n; //S(1)
	cin>>n; 
	int arr[n]; //S(n)
	for(int i=0;i<n;i++)
		cin>>arr[i];
	cout<<brute_sum(arr,n)<<endl;//T(n^3), S(1)
	cout<<cum_sum(arr,n)<<endl; //T(n^2), S(n)
	cout<<kadane(arr,n)<<endl;//T(n), S(1)

	return 0;
}