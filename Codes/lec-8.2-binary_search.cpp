#include<bits/stdc++.h>
using namespace std;

int binary_search(int arr[], int n, int k)
{
	int l =0, r=n-1;
	while(l<=r)
	{
		int mid = (l+r)/2;
		if(arr[mid] == k)
			return mid;
		else if(arr[mid]>k)
			r=mid-1;
		else
			l=mid+1;
	}
	return -1;
}	


int main() {

	int n,k;
	cin>>n>>k;

	int arr[n];

	for(int i=0; i<n;i++)
		cin>>arr[i];

	cout<<binary_search(arr, n ,k)<<endl;

	for(int i=0; i<n;i++)
		cout<<arr[i]<<" ";
	cout<<endl;


	return 0;
}