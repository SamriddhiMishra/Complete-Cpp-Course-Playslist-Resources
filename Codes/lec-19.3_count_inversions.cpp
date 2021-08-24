//Counting INversions using Merge Sort
//https://www.geeksforgeeks.org/counting-inversions/

#include<bits/stdc++.h>
using namespace std;


long long  merge(int arr[], int l, int mid, int r)
{
	long long inv =0;
	int n1= mid-l+1;
	int n2= r-mid;

	int a[n1], b[n2];

	for(int i=0;i<n1;i++)
		a[i] = arr[l+i];

	for(int i=0;i<n2;i++)
		b[i] = arr[mid + 1 +i];

	int i=0, j=0, k=l;
	while(i<n1 && j<n2)
	{
		if(a[i] <= b[j])
			arr[k++] = a[i++];
		else
			{inv += n1-i; arr[k++] = b[j++];}
	}

	while(i<n1)
		arr[k++] = a[i++];

	while(j<n2)
		arr[k++] = b[j++];

	return inv;

}

long long mergeSort(int arr[], int l, int r)
{
	long long inv =0;
	if(l<r)
	{
		int mid = (l+r)/2;
		inv += mergeSort(arr, l, mid);
		inv += mergeSort(arr, mid+1, r);

		inv += merge(arr, l, mid, r);
	}
	return inv;
}


int main()
{
	int arr[] = {3, 5,6,9,1,2,7,8};
	int n = sizeof(arr)/sizeof(arr[0]);
	cout<<mergeSort(arr, 0 , n-1);

	return 0;
}

// T(n) = 2T(n/2) + n
//Time- O(nlogn)
//Space- S(logn)-> stack + S(n)-> space => O(n)