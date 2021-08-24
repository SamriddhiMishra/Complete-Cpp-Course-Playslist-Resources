#include<bits/stdc++.h>
using namespace std;


int main()
{
	//vector<int> vect{ 10, 20, 30, 40 };
	vector<int> v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);

	for(int i=0;i<v.size();i++)
		cout<<v[i]<<" "; //1 2 3

	cout<<endl;

	vector<int>::iterator it;
	for(it=v.begin();it!=v.end();it++)
		cout<<*it<<" "; //1 2 3

	cout<<endl;

	for(auto element:v)
		cout<<element<<" "; //here element is not an iterator //1 2 3

	cout<<endl;

	v.pop_back(); //1 2

	vector<int> v2(3, 50); //3 size, all initialized with 50
	// 50 50 50

	for(auto element:v)
		cout<<element<<" ";
	for(auto element:v2)
		cout<<element<<" ";

	swap(v,v2);//size of vectors may vary
	cout<<endl;

	for(auto element:v)
		cout<<element<<" ";
	for(auto element:v2)
		cout<<element<<" "; 

	sort(v.begin(), v.end());
	cout<<endl;

	for(auto element:v)
		cout<<element<<" ";


	pair<int,int> p;
	p.first = 1;
	p.second = 2;

	return 0;
}
