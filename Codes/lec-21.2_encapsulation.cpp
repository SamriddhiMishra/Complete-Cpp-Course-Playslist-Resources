//Encapsulation
//https://www.geeksforgeeks.org/encapsulation-in-java/
//https://www.geeksforgeeks.org/access-modifiers-in-c/
//https://www.geeksforgeeks.org/friend-class-function-cpp/

#include<bits/stdc++.h>
using namespace std;

class A{

	private:
		int b;
		void funcB(){
			cout<<"Func B\n";
		}
	public:
		int a;
		void funcA(){
			cout<<"Func A\n";
		}
	protected:
		int c;
		void funcC(){
			cout<<"Func C\n";
		}
};

int main()
{
	A obj;
	obj.funcA();
	obj.funcB();
	obj.funcC();

	return 0;
}