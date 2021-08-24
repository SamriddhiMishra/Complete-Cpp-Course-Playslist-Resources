#include<bits/stdc++.h>
using namespace std;

string decimalToBinary(int n)
{	string s=""; char c;
	while(n>0)
	{
		int rem = n%16;
		if(rem > 9)
			c = char(rem + 65 - 10);
		else
			c =  char(rem + 48);
		s = c +s; 
		n/=16;
	}
	return s;
}

int main() {
	int n;
	cin>>n;
	cout<<decimalToBinary(n)<<endl;
  		return 0;
}