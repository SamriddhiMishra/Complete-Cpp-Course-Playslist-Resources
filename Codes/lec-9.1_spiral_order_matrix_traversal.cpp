//https://www.geeksforgeeks.org/print-a-given-matrix-in-spiral-form/
//https://leetcode.com/problems/spiral-matrix/

#include<bits/stdc++.h>
using namespace std;


int main() {
	int n,m; //S(2)
	cin>>n>>m; 
	int arr[n][m]; //S(n*m)
	for(int i=0;i<n;i++)
		for(int j=0;j<m;j++)
			cin>>arr[i][j]; //T(n*m)
	
	int rs=0,re=n-1,cs=0,ce=m-1;
	while(rs<=re && cs<=ce)
	{
		for(int j=cs;j<=ce;j++)
			cout<<arr[rs][j]<<" ";
		rs++;

		for(int i=rs;i<=re;i++)
			cout<<arr[i][ce]<<" ";
		ce--;

		if(rs<=re && cs<=ce)
		{for(int j=ce;j>=cs;j--)
			cout<<arr[re][j]<<" ";
		re--;}

		if(rs<=re && cs<=ce)
		{for(int i=re;i>=rs;i--)
			cout<<arr[i][cs]<<" ";
		cs++;}
	}//T(n*m)

	return 0;
}//S(2+n*m), T(n*m)

//Time- O(n*m)
//Space- O(n*m)