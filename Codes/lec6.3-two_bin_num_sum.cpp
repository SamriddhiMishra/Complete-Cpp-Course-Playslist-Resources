// Sum of two binary numbers

#include<bits/stdc++.h>
using namespace std;

string binarySum(int a, int b)
{	
	int c=0, s=0; string ans="";

	while(a>0 && b>0)
	{
		int rem1 = a%10;
		int rem2 = b%10;

		s = rem1+rem2+c;
		if(s == 2)
		{
			s=0; c=1;
		}
		else if (s==3)
		{
			s=1; c=1;
		}
		else
			c=0;

		ans = char(s + 48)+ ans;
		a/=10;
		b/=10;
	}
	while(a>0)
	{
		int rem1 = a%10;
		s = rem1+c;
		if(s>1)
		{
			s=0; c=1;
		}
		else
			c=0;
		ans = char(s + 48)+ ans;
		a/=10;
	}
	while(b>0)
	{
		int rem1 = b%10;
		s = rem1+c;
		if(s>1)
		{
			s=0; c=1;
		}
		else
			c=0;
		ans = char(s + 48)+ ans;
		b/=10;
	}
	if(c!=0)
		ans = char(c + 48)+ ans;		

	return ans;
}

int main() {
	int a,b;
	cin>>a>>b;
	cout<<binarySum(a,b)<<endl;
  		return 0;
}