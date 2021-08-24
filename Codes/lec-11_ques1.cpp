//https://www.geeksforgeeks.org/pointers-in-c-and-c-set-1-introduction-arithmetic-and-array/
//https://www.geeksforgeeks.org/references-in-c/
//https://www.geeksforgeeks.org/what-are-wild-pointers-how-can-we-avoid/
//https://www.geeksforgeeks.org/pointers-vs-references-cpp/
//https://www.geeksforgeeks.org/passing-reference-to-a-pointer-in-c/
//https://www.geeksforgeeks.org/passing-by-pointer-vs-passing-by-reference-in-c/
//https://www.geeksforgeeks.org/pointers-vs-references-cpp/

#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a = 10;
	int *aptr;
	aptr = &a; //2000
	cout<<aptr<<endl; //2000
	cout<<*aptr<<endl;

	*aptr = 20;
	cout<<aptr<<endl; //2000
	cout<<*aptr<<endl;

	aptr++;
	cout<<aptr<<endl; //2000 + 4bytes = 2004

	//int *p = 2000; invalid
	//cout<<p<<endl;

	return 0;
}