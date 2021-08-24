//Polymorphism
//Virtual Functions
//Runtime Polymorphism
#include<bits/stdc++.h>
using namespace std;

class base{
public:
	virtual void print()
	{
		cout<<"base's print"<<endl;
	}

	void display()
	{
		cout<<"base's display"<<endl;
	}

};

class derived: public base{
public:
	void print()
	{
		cout<<"derived's print"<<endl;
	}

	void display()
	{
		cout<<"derived's display"<<endl;
	}

};

int main()
{
	base *baseptr;
	derived d;
	baseptr = &d;

	baseptr -> print();
	baseptr -> display();
	return 0;
}