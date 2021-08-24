#include<bits/stdc++.h>
//#include<iostream>
using namespace std;


int main()
{


	string s1 = "fam";
	string s2 = "ily";

	cout<<s1+s2<<endl;
	s1.append(s2);
	cout<<s1<<endl;

	s1 = s1+s2;
	cout<<s1<<endl;
	cout<<s1[2]<<endl;

	s1.clear();
	cout<<s1<<endl;

	string str1= "abc", str2="abc";
	if(!str2.compare(str1))
		cout<<"Strings are equal"<<endl;

	str1.clear();
	if(str1.empty())
		cout<<"String is empty"<<endl;

	s1 = "nincompoop";
	s1.erase(3,3);
	cout<<s1<<endl;

	s1 = "nincompoop";
	cout<<s1.find("com")<<endl;

	cout<<s1.find("abc")<<endl;

	s1.insert(2,"lol");
	cout<<s1<<endl;

	cout<<s1.length()<<endl;

	string s = "nincompoop";
	cout<<s.substr(6,4)<<endl;

	return 0;
}