//Polymorphism
//Operator Overloading
#include<bits/stdc++.h>
using namespace std;
//don't give class name- complex as its inbuilt keyword
class Complex{
	int real, img;
	public:
		Complex(int r=0, int i=0) //default arguments
		{
			real = r;
			img = i;
		}

		Complex operator + (Complex const &obj)
		{
			Complex res; //initialized with default arguments
			res.img = img + obj.img;
			res.real = real + obj.real;
			return res;
		}

		void display()
		{
			cout<<img<<" + i"<<real<<endl;
		}
};

int main()
{
	Complex c1(1,2), c2(3,4);
	Complex c3 = c1 + c2;
	c3.display();
	return 0;
}