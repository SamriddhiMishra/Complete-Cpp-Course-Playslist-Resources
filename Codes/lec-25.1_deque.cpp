//Double Ended Queue
//https://www.geeksforgeeks.org/deque-cpp-stl/

#include<bits/stdc++.h>
using namespace std;

int main()
{
	deque<int> dq;
	dq.push_back(1);
	dq.push_back(2);
	dq.push_front(3);
	dq.push_front(4);
	for(int i : dq)
		cout<<i<<" ";

	cout<<endl;
	dq.pop_back();
	dq.pop_front();

	for(int i : dq)
		cout<<i<<" ";

	cout<<endl;

	cout<<dq.size()<<endl;
	return 0;
}

//Insertion/Deletion at end or begin- O(1)