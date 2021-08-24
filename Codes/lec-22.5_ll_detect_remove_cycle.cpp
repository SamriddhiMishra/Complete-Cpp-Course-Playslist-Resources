//Detect and Remove cycle
//Floyd Warshall
//Hare and Tortoise Algorithm

//https://www.geeksforgeeks.org/detect-loop-in-a-linked-list/
//https://www.geeksforgeeks.org/detect-and-remove-loop-in-a-linked-list/
//https://leetcode.com/problems/linked-list-cycle/
//https://leetcode.com/problems/linked-list-cycle-ii/


#include<bits/stdc++.h>
using namespace std;

class node{
public:
	int data;
	node* next;

	node(int val=0)
	{
		data = val;
		next = NULL;
	}

};

void print(node* head)
{
	while(head != NULL)
	{
		cout<<(head->data)<<"->";
		head = head->next;
	}
	cout<<"NULL"<<endl;
}//O(n)

void insertAtTail(node* &head, int val)
{
	node* n = new node(val);
	node* temp = head;
	if(temp == NULL)
		{head = n; return;}
	while(temp->next != NULL)
		temp = temp->next;
	temp->next = n;
}//O(n)

void makeCycle(node* &head, int pos)
{
	node* temp = head;
	node* startNode;

	int count = 1;

	while(temp->next != NULL)
	{
		if(count == pos)
			startNode = temp;

		temp = temp->next;
		count++;
	}
	temp->next = startNode; 
}//O(n)

bool detectCycle(node* &head)
{
	node* slow = head;
	node* fast = head;

	while(fast != NULL && fast->next != NULL)
	{
		slow=slow->next;
		fast = fast->next->next;

		if(slow == fast)
			return true;
	}
	return false;
}//T(n), S(1)- Auxilliary space

void removeCycle(node* &head)
{
	node* slow = head;
	node* fast = head;

	do//assuming cycle is present
	{
		slow=slow->next;
		fast = fast->next->next;
	}
	while(slow != fast);

	fast = head;

	while(slow->next != fast->next)
	{
		slow=slow->next;
		fast = fast->next;
	}
	slow->next = NULL;
}//T(n), S(1)- Auxilliary space

int main()
{
	node* head = NULL;

	insertAtTail(head, 1);
	insertAtTail(head, 2);
	insertAtTail(head, 3);
	insertAtTail(head, 4);

	print(head);
	cout<<detectCycle(head)<<endl;

	makeCycle(head, 2);
	cout<<detectCycle(head)<<endl;
	//print(head); //TLE as cycle present

	removeCycle(head);
	print(head);
	cout<<detectCycle(head)<<endl;


	return 0;
}