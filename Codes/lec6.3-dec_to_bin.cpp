#include<bits/stdc++.h>
using namespace std;

string decimalToBinary(int n)
{	string s="";
	while(n>0)
	{
		int rem = n%2;
		char c =  char(rem + 48);
		s = c +s; 
		n/=2;
	}
	return s;
}

int main() {
	int n;
	cin>>n;
	cout<<decimalToBinary(n)<<endl;
  		return 0;
}