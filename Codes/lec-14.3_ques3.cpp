//Find 1 unique number where all numbers are present tthrice except one number
//https://leetcode.com/problems/single-number-ii/
//https://www.geeksforgeeks.org/find-the-element-that-appears-once/

#include<bits/stdc++.h>
using namespace std;

int setbit(int n, int pos)
{
	return (n | (1<<pos));
}//T(1)

int getbit(int n, int pos)
{
    return ((n & (1<<pos)) != 0);
}//T(1)

int uniq(int arr[], int n)
{
	   int  result=0;
        for(int i=0;i<32;i++)
        {
            int sum =0;
            for(int j=0;j<n;j++)
            {
                if(getbit(arr[j], i))
                    sum++;
            }
            if(sum %3 !=0)
                result = setbit(result, i);
        }
        return result;
} //T(n), S(1)

int main()
{

	int arr[] = {0,1,0,1,0,1,99};
	cout<<uniq(arr, 7)<<endl;

	return 0;
}
//Time- O(n)
//Space- O(n)