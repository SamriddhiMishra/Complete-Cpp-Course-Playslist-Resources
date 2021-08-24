#include<bits/stdc++.h>
using namespace std;


int main()
{

	string s = "beewcbwjebcwc";

	sort(s.begin(),s.end(),greater<int>());// sort in descending order
	cout<<s<<endl;


	return 0;
}