//DNF Sort, 0s 1s 2s sort

#include<bits/stdc++.h>
using namespace std;

void swap(int arr[], int i, int j)
{
	int temp = arr[i];
	arr[i] = arr[j];
	arr[j] = temp;
}

void dnfSort(int arr[], int n)
{
	int low=0, mid=0, high = n-1;
	while(mid <= high)
	{
		if(arr[mid] == 0)
		{
			swap(arr, low, mid);
			low++; mid++;
		}
		else if (arr[mid] == 1)
			mid++;
		else
		{
			swap(arr, mid, high);
			high--;
		}
	}
}

int main()
{
	int arr[] = {6, 1, 2, 5, 8};
	int n = sizeof(arr)/sizeof(arr[0]);

	dnfSort(arr, n);

	for(int i=0;i<n;i++)
		cout<<arr[i]<<" ";
	return 0;
}

//Time- O(n)
//Space- O(n)