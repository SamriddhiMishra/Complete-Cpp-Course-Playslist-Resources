//https://www.geeksforgeeks.org/reverse-a-linked-list/
//https://leetcode.com/problems/reverse-linked-list/

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


node* reverse(node* head)//Iterative Method
{
	if(head == NULL)
		return NULL;

	node* prevptr = NULL;
	node* currptr = head;
	node* nextptr;

	while(currptr != NULL)
	{
		nextptr = currptr->next;
		currptr->next = prevptr;

		prevptr = currptr;
		currptr = nextptr;
	}

	return prevptr;
}//O(n)

node* reverseRecursive(node* head)
{
	if(head == NULL || head->next == NULL)
		return head;

	node* newhead = reverseRecursive(head->next);
	head->next->next = head;
	head->next = NULL;// imp step, else first element won't point to null

	return newhead;
}//T(n) = T(n-1) +1
//O(n)


int main()
{
	node* head = NULL;

	insertAtTail(head, 1);
	insertAtTail(head, 2);
	insertAtTail(head, 3);

	print(head);

	//node* newhead = reverse(head);

	node* newhead = reverseRecursive(head);

	print(newhead);

	return 0;
}