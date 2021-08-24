//https://www.geeksforgeeks.org/find-subarray-with-given-sum/
//https://leetcode.com/problems/subarray-sum-equals-k/

#include<bits/stdc++.h>
using namespace std;

void subarray_sum(int arr[], int n, int s)
{
	int st=0, en=0, currsum=arr[0]; //S(3)
	while(currsum != s && st<n && en<n)
	{
		while(currsum < s && en < n) //T(n)
		{
			en++;
			currsum+= arr[en];
		}
		while(currsum > s && st < n) //T(n)
		{
			currsum-= arr[st];
			st++;
		}
	}
	if (currsum == s) //T(1)
		cout<<st<<" "<<en<<endl; //T(1)
	else if(st == n || en == n) //T(1)
		cout<<"No sum"<<endl; //T(1)
}
//T(n + n + 4) = T(n)
// S(3)


int main() {
	int n,s; //S(1)
	cin>>n>>s; 
	int arr[n]; //S(n)
	for(int i=0;i<n;i++)
		cin>>arr[i];
	subarray_sum(arr,n, s); //T(n), S(1)

	return 0;
}
//Time- T(n+n) = O(n)
//Space- S(1+n+3) = O(n)
//Two Pointer method/sliding window, as sum less than s inc en, else if more then inc st