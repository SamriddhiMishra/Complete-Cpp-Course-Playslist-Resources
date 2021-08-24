//https://codingcompetitions.withgoogle.com/kickstart/round/000000000019ff08/0000000000387171
#include<bits/stdc++.h>
using namespace std;

int record_breaker(int arr[], int n)
{
	int c=0, maxi=INT_MIN; //S(2)
	if( n == 1) //T(1)
		return 1; //T(1)
	for(int i=0;i<n;i++)
	{
		if(i == 0 && arr[i+1] < arr[i]) //T(n)
			c++; //T(1)
		else if(i == n-1 && maxi < arr[i]) //T(n)
			c++; //T(1)
		else if(arr[i] > maxi && arr[i] > arr[i+1]) //T(n-2)
		  	c++; //T(n-2)
		maxi = max(maxi, arr[i]); //T(n)
	}
	return c; //T(1)
} //T(2 + n + 1 + n + 1 + n-2 + n-2 + n + 1) = T(n)
// S(2)


int main() {
	int n; //S(1)
	cin>>n; 
	int arr[n]; //S(n)
	for(int i=0; i<n;i++)
		cin>>arr[i]; //T(n)
	cout<<record_breaker(arr,n)<<endl; //T(n), S(2)

	return 0;
}

//Time- T(n+n) = O(n)
//Space- S(1+n+2) = O(n)
//Traverse, check max from previous or following element and update, remeber corner cases