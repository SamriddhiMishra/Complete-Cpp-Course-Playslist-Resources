//Polymorphism
//https://www.geeksforgeeks.org/polymorphism-in-c/
//Function Overloading
#include<bits/stdc++.h>
using namespace std;

class apna{
	public:

		void func()
		{
			cout<<"No argument"<<endl;
		}

		void func(int n)
		{
			cout<<"Int argument"<<endl;
		}

		void func(double n)
		{
			cout<<"Double argument"<<endl;
		}
};

int main()
{
	apna a;
	a.func();
	a.func(1);
	a.func(2.0);
	return 0;
}