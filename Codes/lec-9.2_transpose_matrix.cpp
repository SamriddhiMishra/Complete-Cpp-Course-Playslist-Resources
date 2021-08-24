//https://leetcode.com/problems/transpose-matrix/
//https://www.geeksforgeeks.org/program-to-find-transpose-of-a-matrix/

#include<bits/stdc++.h>
using namespace std;


int main() {
	int n; //S(2)
	cin>>n; 
	int arr[n][n]; //S(n*m)
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
			cin>>arr[i][j]; //T(n*m)
	
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			int temp = arr[i][j];
			arr[i][j] = arr[j][i];
			arr[j][i] = temp;
		}
	}//T(n*m)

	for(int i=0;i<n;i++)
	{	for(int j=0;j<n;j++)
			cout<<arr[i][j]<<" "; //T(n*m)
		cout<<endl;
	}
	return 0;
}//S(2+n*m), T(n*m)

//Time- O(n*m)
//Space- O(n*m)