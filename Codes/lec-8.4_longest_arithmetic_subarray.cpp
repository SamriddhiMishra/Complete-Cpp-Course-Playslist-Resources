//https://www.geeksforgeeks.org/longest-subarray-forming-an-arithmetic-progression-ap/
//https://codingcompetitions.withgoogle.com/kickstart/round/000000000019ff47/00000000003bf4ed

#include<bits/stdc++.h>
using namespace std;


void long_arth_subarray(int arr[], int n)
{
	int c=2, d=arr[0]-arr[1], maxi = 2; //S(3)

	for(int i=1;i<n-1;i++)
	{
		if(arr[i]-arr[i+1] == d) //T(n-2)
			c++; //T(n-2)
		else //T(n-2)
		{
			maxi = max(maxi, c);//T(n-2)
			c=2; //T(n-2)
			d = arr[i]-arr[i+1]; //T(n-2)
		}
	}
	maxi = max(maxi, c); //T(1)
	cout<<maxi<<endl; //T(1)
} //T((n-2)*6 +2) = T(n)
// S(3)


int main() {
	int n; //S(1)
	cin>>n; 
	int arr[n]; //S(n)
	for(int i=0; i<n;i++)
		cin>>arr[i]; //T(n)
	long_arth_subarray(arr,n); //T(n), S(3)

	return 0;
}

//Time- T(n+n) = O(n)
//Space- S(1+n+3) = O(n)
//Check diff with prev diff if same increase count else, count=2 and update the diff