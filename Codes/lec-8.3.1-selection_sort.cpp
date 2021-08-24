#include<bits/stdc++.h>
using namespace std;

void selection_sort(int arr[], int n)
{
	int pos;
	for(int i=0;i<n-1;i++)
	{	pos = i;
		for(int j=i+1;j<n;j++)
		{
			if(arr[j] <arr[pos])
				pos = j;
		}
		int temp = arr[pos];
		arr[pos] = arr[i];
		arr[i] = temp;
	}
}	


int main() {

	int n;
	cin>>n;

	int arr[n];

	for(int i=0; i<n;i++)
		cin>>arr[i];

	selection_sort(arr, n);

	for(int i=0; i<n;i++)
		cout<<arr[i]<<" ";
	cout<<endl;


	return 0;
}