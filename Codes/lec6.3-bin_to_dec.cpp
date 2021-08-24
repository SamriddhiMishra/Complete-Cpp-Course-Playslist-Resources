#include<bits/stdc++.h>
using namespace std;

int binaryToDecimal(int n)
{	int c=0,s=0;
	while(n>0)
	{
		int rem = n%10;
		s += rem*pow(2,c++);
		n/=10;
	}
	return s;
}

int main() {
	int n;
	cin>>n;
	cout<<binaryToDecimal(n)<<endl;
  		return 0;
}