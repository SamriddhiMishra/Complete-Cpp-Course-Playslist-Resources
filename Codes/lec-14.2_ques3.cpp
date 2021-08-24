//Generate all subsets- Power set
//https://www.geeksforgeeks.org/power-set/

#include<bits/stdc++.h>
using namespace std;

void subsets(int arr[], int n)
{
    
    for(int i=0;i<(1<<n);i++)
    {
    	for(int j=0;j<n;j++)
    	{
    		if( i & (1<<j))
    			cout<<arr[j];
    	}
    	cout<<endl;
    }
} //T(n*2^n)

int main()
{

	int arr[] = {1,2,3,4};
	subsets(arr, 4);

	return 0;
}