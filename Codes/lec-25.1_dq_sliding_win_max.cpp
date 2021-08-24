//Sliding Window maximum
//Approach 1, multiset
//https://www.geeksforgeeks.org/sliding-window-maximum-maximum-of-all-subarrays-of-size-k/

#include<bits/stdc++.h>
using namespace std;

int main()
{
	
	int n, k;
	cin>>n>>k;

	vector<int> a(n); vector<int> ans;
	for(auto &i : a)
		cin>>i;

	multiset<int, greater<int>> s;

	for(int i=0;i<k;i++)
		s.insert(a[i]);
	ans.push_back(*s.begin());

	for(int i=k;i<n;i++)
	{
		s.erase(s.lower_bound(a[i-k]));
		s.insert(a[i]);
		ans.push_back(*s.begin());
	}

	for(auto i : ans)
		cout<<i<<" ";
	return 0;
}

//T(nlogk), each insertion/deletion-log k, and for n elements so T(nlog k)
//S(n+k), multiset stores only k