//Count sort

#include<bits/stdc++.h>
using namespace std;

void countSort(int arr[], int n)
{
	int k = arr[0];
	int ans[n];
	for(int i=0;i<n;i++)
		k = max(k, arr[i]);

	int c[10] = {0}; 

	for(int i=0;i<n;i++)
		c[arr[i]]++;

	for(int i=1;i<=k;i++)
		c[i] = c[i] + c[i-1];

	for(int i=n-1;i>=0;i--)
		ans[--c[arr[i]]] = arr[i];

	for(int i=0;i<n;i++)
		cout<<ans[i]<<" ";
}

int main()
{
	int arr[] = {6, 1, 3, 5, 8};
	int n = sizeof(arr)/sizeof(arr[0]);

	countSort(arr, n);

	return 0;
}

//Time- O(maxelemnt+ n))
//Space- O( maxelemnt+ n)