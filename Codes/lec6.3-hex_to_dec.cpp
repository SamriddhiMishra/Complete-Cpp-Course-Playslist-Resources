#include<bits/stdc++.h>
using namespace std;

int binaryToDecimal(string n)
{	int s=0, d;
	for(char c: n)
	{
		if ( c >= '0' && c<= '9')
			d = int(c) - '0';
		else
			d = int(c) - 'A' + 10;
		//cout<<int(c)<<" "<<int(c)-'0'<<endl;
		s = s*16 + d;
	}
	return s;
}

int main() {
	string n;
	cin>>n;
	cout<<binaryToDecimal(n)<<endl;
  		return 0;
}