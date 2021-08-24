//OOPs

#include<bits/stdc++.h>
using namespace std;

class student{
	string name;
	int age;
	bool gender;

	public:
	void setName(string s)
	{
		name = s;
	}

	string getName()
	{
		return name;
	}

	void setAge(int a)
	{
		age = a;
	}

	int getAge()
	{
		return age;
	}

	void setGender(bool s)
	{
		gender = s;
	}

	bool getGender()
	{
		return gender;
	}
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

/*	student a;
	a.name = "Sam";
	a.age = 21;
	a.gender = true;*/

	student arr[2];
	for(int i=0;i<2;i++)
	{
		string name; int age; bool gender;
		cin>>name;
		cin>>age;
		cin>>gender;
		arr[i].setName(name);
		arr[i].setAge(age);
		arr[i].setGender(gender);
	}
// Test case
//	sam
//	12
//	1 //don't pass true, false pass 0 , 1
//	oyee
//	34
//	0

	for(int i=0;i<2;i++)
	{
		arr[i].printInfo();
	}

	return 0;
}

//Time- T(n/2) - O(n)
//Space- O(n)