#include<bits/stdc++.h>
using namespace std;

int main() {

	int n; //S(1)
	cin>>n; 
	int arr[n]; //S(n)
	for(int i=0; i<n;i++)
		cin>>arr[i]; //T(n)
	int maxi = INT_MIN; //S(1)

	for(int i=0;i<n;i++)
	{
		maxi = max(maxi, arr[i]); //T(n)
		cout<<maxi<<" "; //T(n)
	}
	return 0;
}

//Time - T(n+n+n) = O(n)
//Space - S(1+n+1) = O(n)
// Left->Right Update max at each index and print new max