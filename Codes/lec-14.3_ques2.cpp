//Find two unique numbers where all numbers except 2 numbers are present twice
//https://leetcode.com/problems/single-number-iii/
//https://www.geeksforgeeks.org/find-two-non-repeating-elements-in-an-array-of-repeating-elements/

#include<bits/stdc++.h>
using namespace std;

int check_setbit(int n, int pos)
{
	return ((n & (1<<pos)) != 0);
}

void two_uniq(int arr[], int n)
{
	int xorsum =0;
    for(int i=0;i<n;i++)
    	xorsum ^= arr[i];

    /* Get the rightmost set bit in set_bit_no */
    //set_bit_no = Xor & ~(Xor - 1);
    // OR

    int temp_xor = xorsum, setbit =0, pos=0;
    while(temp_xor != 0 && setbit != 1)
    {
    	setbit = temp_xor&1;
    	temp_xor >>= 1;
    	pos++;
    }

    int xors=0;
    for(int i=0;i<n;i++)
    {
    	if( check_setbit(arr[i], pos-1))
    		xors ^= arr[i];
    }
    cout<<xors<<endl;
    cout<<(xorsum^xors)<<endl;

} //T(n), S(1)

int main()
{

	int arr[] = {8, 2, 3, 8, 2, 3, 4, 9};
	two_uniq(arr, 8);

	return 0;
}
//Time- O(n)
//Space- O(n)