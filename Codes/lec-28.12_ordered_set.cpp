//Set in C++ STL
//https://www.geeksforgeeks.org/set-in-cpp-stl/
//https://www.geeksforgeeks.org/lower_bound-in-cpp/
//https://www.geeksforgeeks.org/upper_bound-in-cpp/

#include<bits/stdc++.h>
using namespace std;

int main()
{
	
	//Ordered set, by default ascending order
	set<int> s;
	s.insert(1);
	s.insert(2);
	s.insert(2);
	s.insert(3);

	//printing element
	for(auto i: s)//for each loop
		cout<<i<<" ";
	cout<<endl;

	for(auto itr = s.begin(); itr != s.end(); itr++)//traversing using iterator
		cout<<*itr<<" ";
	cout<<endl;

	//print in reverse
	for(auto itr = s.rbegin(); itr != s.rend(); itr++)
		cout<<*itr<<" ";
	cout<<endl;

	cout<<s.size()<<endl;

	//Custom Comparator
	set<int, greater<int>> s2;//store elements in descending order
	s2.insert(1);
	s2.insert(2);
	s2.insert(2);
	s2.insert(3);

	for(auto i: s2)//for each loop
		cout<<i<<" ";
	cout<<endl;

	//Lower/Upper Bound
	set<int> s3;
	s3.insert(1);
	s3.insert(3);
	s3.insert(5);
	
	cout<<*s3.lower_bound(2)<<endl; //next >= val
	cout<<*s3.lower_bound(3)<<endl;
	cout<<*s3.upper_bound(3)<<endl; // next > val
	cout<<(s3.upper_bound(5) == s3.end())<<endl;


	//Erase element
	set<int> s4;
	s4.insert(1);
	s4.insert(3);
	s4.insert(2);	
	s4.insert(5);


	s4.erase(2);//pass element to erase
	s4.erase(s4.begin()); //pass the iterator


	for(auto j: s4)//for each loop
		cout<<j<<" ";
	cout<<endl;

	vector<int> v = {7,8,9};
	// assigning the elements from v to s5, we can assign from one set to other as well
	
    set<int> s5(v.begin(), v.end());

    for(auto j: s5)//for each loop
		cout<<j<<" ";
	cout<<endl;

    // remove all elements up to 8 in s2
    s5.erase(s5.begin(), s5.find(8)); //[fast, last) the last element not included, i.e 8 not erased

    cout<<s5.size()<<endl;

    for(auto j: s5)//for each loop
		cout<<j<<" ";
	cout<<endl;

	return 0;
}
//Insertion- O(logn)
//Deletion- O(logn)
//Lower/Upper Bound - O(logn)
//print- O(nlogn) first find-O(logn) and then print