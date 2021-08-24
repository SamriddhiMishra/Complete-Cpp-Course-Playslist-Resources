//https://leetcode.com/problems/two-sum/submissions/
//https://www.geeksforgeeks.org/given-an-array-a-and-a-number-x-check-for-pair-in-a-with-sum-as-x/

#include<bits/stdc++.h>
using namespace std;

bool brute_force(int arr[], int n, int k)
{
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(arr[i] + arr[j] == k)
				{	cout<<arr[i]<<" "<<arr[j]<<endl;
				return true;
			}
		}
	}
	return false;
} // T(n^2) , S(1)

bool pair_sum(int arr[], int n, int k)
{
	sort(arr, arr+n);
	int low=0, high=n-1;
	while(low<high)
	{
		if(arr[low] + arr[high] <k)
			low++;
		else if(arr[low] + arr[high] >k)
			high--;
		else
			{cout<<arr[low]<<" "<<arr[high]<<endl; return true;}
	}
	return false;
}// T(n + nlogn) , S(1)

int main() {
	int n,k; //S(1)
	cin>>n>>k; 
	int arr[n]; //S(n)
	for(int i=0;i<n;i++)
		cin>>arr[i];
	cout<<brute_force(arr,n,k)<<endl;//T(n), S(1)
	cout<<pair_sum(arr,n,k)<<endl;//T(nlogn), S(1)

	return 0;
}