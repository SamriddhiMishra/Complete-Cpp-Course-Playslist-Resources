//Stack Implementation using Array
#include<bits/stdc++.h>
using namespace std;

#define n 100

class mystack
{
	int* arr; //creating array dynamically
	int top;
	//int n = 105;
public:
	mystack(){
		arr = new int[n];
		top= -1;
	}
	void push(int x){
		if(top == n-1)
			{cout<<"Stack Overflow"<<endl; return;}
		arr[++top] = x;
	}//T(1)
	void pop(){
		if(top == -1)
			{cout<<"Stack Underflow"<<endl; return;}
		top--;
	}//T(1)
	int Top(){
		if(top == -1)
			{cout<<"Stack Underflow "; return -1;}
		return arr[top];
	}//T(1)
	bool empty(){
		return top == -1;
	}//T(1)
};

void print(mystack &st)
{
    while(!st.empty())
    {
        cout<<st.Top()<<endl;
        st.pop();
    }
    cout<<endl;
}

int main()
{
	
	mystack st;
	st.push(1);
	st.push(2);
	st.push(3);
	cout<<st.Top()<<endl;
	st.pop();
	cout<<st.Top()<<endl;
	st.pop();
	cout<<st.Top()<<endl;
	st.pop();
	cout<<st.Top()<<endl;
	cout<<st.empty()<<endl;
	print(st);
	return 0;
}