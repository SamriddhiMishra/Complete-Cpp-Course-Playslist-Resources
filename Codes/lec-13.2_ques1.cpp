#include<bits/stdc++.h>
using namespace std;


int main()
{

	//To Upper Case
	string s1 = "acdnmcbeewcbwjebcwc";

	for(int i=0;i<s1.size();i++)
	{
		if(s1[i]>='a' && s1[i]<='z')
			s1[i] -=32;
	}
	cout<<s1<<endl;


	//To lower case
	string s2 = "AYJFVJYF<Y";

	for(int i=0;i<s2.size();i++)
	{
		if(s2[i]>='A' && s2[i]<='Z')
			s2[i] +=32;
	}
	cout<<s2<<endl;


	transform(s2.begin(), s2.end(), s2.begin(), ::toupper);
	cout<<s1<<endl;

	transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
	cout<<s2<<endl;


	return 0;
}