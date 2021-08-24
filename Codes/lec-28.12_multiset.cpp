//Multiset in C++ STL
//https://www.geeksforgeeks.org/multiset-in-cpp-stl/

#include<bits/stdc++.h>
using namespace std;

int main()
{
	
	//Ordered set, by default ascending order
	multiset<int> s;//duplicates allowed
	s.insert(1);
	s.insert(3);
	s.insert(5);
	s.insert(3);

	//printing element
	for(auto i: s)//for each loop
		cout<<i<<" ";
	cout<<endl;

	for(auto itr = s.begin(); itr != s.end(); itr++)//traversing using iterator
		cout<<*itr<<" ";
	cout<<endl;

	//erase, all occurrences of 3 will be erased
	s.erase(3);

	for(auto i: s)//for each loop
		cout<<i<<" ";
	cout<<endl;

	//Adding more 3s
	s.insert(3);
	s.insert(3);
	s.insert(3);

	for(auto i: s)//for each loop
		cout<<i<<" ";
	cout<<endl;

	//s.find(3); find element 3 and returns iterator of first occurrence of 3
	s.erase(s.find(3)); // so remove the element present at that iterator, i.e remove only the first occurrence of 3
	//but 3 must be present in set else give error.

	//s.erase(s.find(8));
	for(auto i: s)//for each loop
		cout<<i<<" ";
	cout<<endl;

	vector<int> v = {7,8,8,9};
	// assigning the elements from v to s5, we can assign from one set to other as well
	multiset <int> s2(v.begin(), v.end());

    for(auto j: s2)//for each loop
		cout<<j<<" ";
	cout<<endl;

    // remove all elements up to first occurrence of 8 in s2, not including 8 itself
    s2.erase(s2.begin(), s2.find(8)); //[fast, last) the last element not included, i.e 8 not erased

    cout<<s2.size()<<endl;

    for(auto j: s2)//for each loop
		cout<<j<<" ";
	cout<<endl;
	return 0;
}

//Insertion- O(logn)
//Deletion- O(logn)
//Lower/Upper Bound - O(logn)
//print- O(nlogn) first find-O(logn) and then print