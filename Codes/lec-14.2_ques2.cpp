//Count no of 1s in binary representation
#include<bits/stdc++.h>
using namespace std;

//Brian Kernighan’s Algorithm
int numberOfones(int n)
{
	int count=0;
	while(n)
	{
		n= n&(n-1);
		count++;
	}
	return count;
}//T(no of set bits) = In worst case -T(total no of bits) = T(log2 (n))

int countSetBits(int n)
{
    int count = 0;
    while (n) {
        count += n & 1;
        n >>= 1;
    }
    return count;
} //T(total no of bits) = T(log2 (n))

int main()
{

	cout<<numberOfones(5)<<endl;

	return 0;
}