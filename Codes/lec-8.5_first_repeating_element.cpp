//https://www.geeksforgeeks.org/find-first-repeating-element-array-integers/

#include<bits/stdc++.h>
using namespace std;

int first_repeating(int arr[], int n, int maxi)
{
	int mini= INT_MAX; //S(1)
	int a[maxi+1];  //S(1)
	fill_n(a,maxi+1,-1); //T(1)
	for(int i=0;i<n;i++)
	{
		if(a[arr[i]] == -1) //T(n)
			a[arr[i]] = i; //T(n)
		else //T(n)
			mini = min(mini, a[arr[i]]); //T(n)
	}
	if(mini > maxi-1) //T(1)
		mini=-1; //T(1)
	return mini; //T(1)
}
//T(1 + n + n + n + n + 1 + 1 + 1) = T(n)
// S(2)


int main() {
	int n; //S(1)
	cin>>n; 
	int arr[n], maxi=INT_MIN; //S(n)
	for(int i=0; i<n;i++)
	{
		cin>>arr[i]; //T(n)
		maxi = max(maxi, arr[i]);
	}
	cout<<first_repeating(arr,n, maxi)<<endl; //T(n), S(2)

	return 0;
}
//Time- T(n+n) = O(n)
//Space- S(1+n+2) = O(n)
// Extra array with index of each element and keep min index for every repeating element