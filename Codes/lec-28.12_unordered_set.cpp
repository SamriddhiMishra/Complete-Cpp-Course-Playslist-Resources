//Unordrerd Set in C++ STL
//https://www.geeksforgeeks.org/unordered_set-in-cpp-stl/

#include<bits/stdc++.h>
using namespace std;

int main()
{
	
	//Ordered set, by default ascending order
	unordered_set<int> s;
	s.insert(1);
	s.insert(2);
	s.insert(5);
	s.insert(3);

	//printing element
	for(auto i: s)//for each loop
		cout<<i<<" ";
	cout<<endl;

	for(auto itr = s.begin(); itr != s.end(); itr++)//traversing using iterator
		cout<<*itr<<" ";
	cout<<endl;

	cout<<s.size()<<endl;


	//Erase element

	s.erase(2);//pass element to erase
	s.erase(s.begin()); //pass the iterator


	for(auto j: s)//for each loop
		cout<<j<<" ";
	cout<<endl;

	vector<int> v = {7,8,9};
	// assigning the elements from v to s5, we can assign from one set to other as well
	
    unordered_set<int> s5(v.begin(), v.end());

    for(auto j: s5)//for each loop
		cout<<j<<" ";
	cout<<endl;


	return 0;
}
//Insertion- Avg-O(1) , Worst-O(n)
//Deletion- Avg-O(1) , Worst-O(n)
//Lower/Upper Bound - NA