#include<bits/stdc++.h>
using namespace std;

void ascii(char c)
{
	cout<<int(c)<<endl;
}
void fact(int n)
{
	cout<<"1 "<<n<<endl;
	for(int i =2 ;i<=sqrt(n);i++)
	{
		if(n%i == 0)
			cout<<i<<" "<<n/i<<endl;
	}
}
void vowel(char c)
{	c = tolower(c);
	if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u')
		cout<<"vowel"<<endl;
	else
		cout<<"consonant"<<endl;
}
int main() {
	ascii('a');
	cout<<endl;
	fact(10);
	cout<<endl;
	vowel('c');
  	return 0;
}