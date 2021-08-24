#include <iostream> 
using namespace std;
int main() {
		int x,y,z;
		cin>>x>>y>>z;
		if((x>y && x>z && x*x == y*y + z*z) || (z>y && z>x && z*z == y*y + x*x) || (y>z && y>x && y*y == x*x + z*z))
			cout<<"Yes";
		else
			cout<<"No";

  		return 0;
}