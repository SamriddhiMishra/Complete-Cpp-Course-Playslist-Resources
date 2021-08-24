//Check if a number is power of 2 
#include<bits/stdc++.h>
using namespace std;

int isPower2(int n)
{
	return (n && !(n & n-1));
} //T(1)

int power2(int n)
{
	while(n%2 ==0)
	{
		n/=2;
	}
	if (n==1)
		return 1;
	return 0;
} //T(log2 n)

int main()
{

	cout<<isPower2(0)<<endl;
	cout<<power2(7)<<endl;

	return 0;
}