//OOPs
//https://www.geeksforgeeks.org/difference-between-shallow-and-deep-copy-of-a-class/
//https://www.geeksforgeeks.org/operator-overloading-c/

#include<bits/stdc++.h>
using namespace std;

class student{
	string name;
	int age;
	bool gender;


	public:
	student()
	{
		cout<<"Default constructor "<<endl;
		name = "ddd";
		age = 33;
		gender = 0;
	}//default constructor

	student(string n, int a, bool g)
	{
		cout<<"Parameterised constructor "<<endl;
		name = n;
		age = a;
		gender = g;
	}//parameterised constructor

	student(student &a) //adress of another object
	{
		cout<<"Copy constructor "<<endl;
		name = a.name;
		age = a.age;
		gender = a.gender;
	}//Copy constructor, we defined

	~student(){
		cout<<"Destructor called"<<endl;
	}//Destructor

	bool operator == (student &a){
		if(name == a.name && age == a.age && gender == a.gender)
			return true;
		return false;
	}//Operator overloading


	void printInfo()
	{
		cout<<"Name = ";
		cout<<name<<endl;
		cout<<"Age = ";
		cout<<age<<endl;
		cout<<"Gender = ";
		cout<<gender<<endl;
	}
};

int main()
{

	student a("Sam", 21, 1);
	a.printInfo();

	student b;
	b.printInfo();

	//Creating copy constructor
	student c = a;
	c.printInfo();

	student d(a);
	d.printInfo();

	if( c== a)
		cout<<"Same"<<endl;
	else
		cout<<"Not Same"<<endl;

	return 0;
}