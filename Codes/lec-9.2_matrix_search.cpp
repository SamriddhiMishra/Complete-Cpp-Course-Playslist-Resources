//https://www.geeksforgeeks.org/search-element-sorted-matrix/
//https://leetcode.com/problems/search-a-2d-matrix/

#include<bits/stdc++.h>
using namespace std;


int main() {
	int n,m,k; //S(2)
	cin>>n>>m>>k; 
	int arr[n][m]; //S(n*m)
	for(int i=0;i<n;i++)
		for(int j=0;j<m;j++)
			cin>>arr[i][j]; //T(n*m)

//Brute Force - O(n*m)
	bool f = false;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			if(arr[i][j] == k)
			{
				f = true;
				break;
			}
		}
	}//T(n*m)
	if(f == true)
		cout<<"Present"<<endl;
	else
		cout<<"Not Present"<<endl;

//Optimized - T(n+m-2) - O(n+m)
	f = false;
	int i=0,j=m-1;
	while(i<n && j>=0)
	{
		if(arr[i][j] == k)
		{
			f = true;
			break;
		}
		else if(arr[i][j] > k)
			j--;
		else
			i++;
	}
	if(f == true)
		cout<<"Present"<<endl;
	else
		cout<<"Not Present"<<endl;

	return 0;
}

//Best Time- O(n+m)
//Best Space- O(n*m)