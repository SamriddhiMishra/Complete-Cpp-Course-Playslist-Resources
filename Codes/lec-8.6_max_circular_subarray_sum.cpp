//Find subarray with maximum sum
//Three approaches- 1) Brute Force- O(n^3) 2)Cumulative sum approach-O(n^2) 3) Kadane's Algo- O(n) 
//https://www.geeksforgeeks.org/maximum-contiguous-circular-sum/
//https://leetcode.com/problems/maximum-sum-circular-subarray/

#include<bits/stdc++.h>
using namespace std;

int kadane(int arr[], int n)
{
	int maxi= INT_MIN, sum=0;
	for(int i=0;i<n;i++)
	{
		sum+=arr[i];
		if(sum<0)
			sum=0;
		maxi = max(maxi, sum);
	}
	return maxi;
}//T(n) = T(n)
// S(2)

int circular_sum(int arr[], int n) // Not works when all -ve elements
{
	int wrapsum, nonwrapsum;
	nonwrapsum = kadane(arr, n);

	int sum=0;
	for(int i=0;i<n;i++)
	{
		sum+= arr[i];
		arr[i] = -arr[i];
	}
	wrapsum = sum + kadane(arr,n);
	return max(wrapsum,nonwrapsum);
}//T(n) 
// S(3)

int circular_sum2(int a[], int n) // Works even when all -ve elements
{
	if (n == 1)
        return a[0];
 
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += a[i];
    }
 
    int curr_max = a[0], max_so_far = a[0], curr_min = a[0], min_so_far = a[0];
 
    for (int i = 1; i < n; i++) {
        curr_max = max(curr_max + a[i], a[i]);
        max_so_far = max(max_so_far, curr_max);

        curr_min = min(curr_min + a[i], a[i]);
        min_so_far = min(min_so_far, curr_min);
    }
 
    if (min_so_far == sum)
        return max_so_far;
 
    return max(max_so_far, sum - min_so_far);
}//T(n)
// S(3)

int main() {
	int n; //S(1)
	cin>>n; 
	int arr[n]; //S(n)
	for(int i=0;i<n;i++)
		cin>>arr[i];
	cout<<circular_sum2(arr,n)<<endl;//T(n),S(1)
	cout<<circular_sum(arr,n)<<endl;//T(n), S(1)

	return 0;
}