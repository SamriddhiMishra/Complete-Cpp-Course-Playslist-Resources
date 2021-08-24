//https://www.geeksforgeeks.org/c-program-multiply-two-matrices/

#include<bits/stdc++.h>
using namespace std;


int main() {
	int n1,m1,n2,m2; //S(2)
	cin>>n1>>m1; 
	int arr1[n1][m1]; //S(n1*m1)
	for(int i=0;i<n1;i++)
		for(int j=0;j<m1;j++)
			cin>>arr1[i][j]; //T(n1*m1)

	cin>>n2>>m2; 
	int arr2[n2][m2]; //S(n2*m2)
	for(int i=0;i<n2;i++)
		for(int j=0;j<m2;j++)
			cin>>arr2[i][j]; //T(n2*m2)

	int arr[n1][m2];

//Brute Force - O(n^3)
	for(int i=0;i<n1;i++)
	{
		for(int j=0;j<m2;j++)
		{
			int sum=0;
			for(int k=0;k<m1;k++)
				sum += arr1[i][k] * arr2[k][j];
			arr[i][j] = sum;
		}
	}//T(n1*m2*m1)- O(n^3)

	for(int i=0;i<n1;i++)
	{	for(int j=0;j<m2;j++)
			cout<<arr[i][j]<<" "; //T(n*m)
		cout<<endl;
	}
	return 0;
}

//Time- O(n*n*n)
//Space- O(n*m)