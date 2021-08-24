#include<bits/stdc++.h>
using namespace std;

bool myCompare(pair<int,int> p1, pair<int, int> p2){
    return (p1.first < p2.first);
}

int main()
{
	int arr[] = {6, 1, 0, 5, 8};
	vector<pair<int,int>> v;

	int n = sizeof(arr)/sizeof(arr[0]);

	for(int i=0;i<n;i++)
		v.push_back(make_pair(arr[i],i));

	sort(v.begin(), v.end(), myCompare);

	for(int i=0;i<v.size();i++)
		arr[v[i].second] = i;

	for(int i=0;i<n;i++)
		cout<<arr[i]<<" ";

	return 0;
}
