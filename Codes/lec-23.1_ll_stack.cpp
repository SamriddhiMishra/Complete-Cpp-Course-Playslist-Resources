//Stack Implementation using linked list
//https://www.geeksforgeeks.org/implement-a-stack-using-singly-linked-list/

#include<bits/stdc++.h>
using namespace std;

class node{
	public:
		int data;
		node* next;

		node(int val){
			data = val;
			next = NULL;
		}
};

class mystack{
	node* top;
public:
	mystack(){
		top = NULL;
	}

	void push(int x)
	{
		node* n = new node(x);
		if(top == NULL)
			{top = n; return;}
		n->next = top;
		top = n;
	}//T(1)

	void pop()
	{
		if(top == NULL)
			{ cout<<"Stack Underflow"<<endl; return;}
		node* todelete = top;
		top = top->next;
		delete todelete;
	}//T(1)

	int Top()
	{
		if(top == NULL)
			{ cout<<"Stack Underflow"<<endl; return -1;}
		return top->data;	
	}//T(1)

	bool empty()
	{
		if(top == NULL)
			return true;
		return false;
	}//T(1)
};

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
	return 0;
}
