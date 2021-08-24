//https://www.geeksforgeeks.org/reverse-a-list-in-groups-of-given-size/
//https://www.geeksforgeeks.org/reverse-alternate-k-nodes-in-a-singly-linked-list/
//https://leetcode.com/problems/reverse-nodes-in-k-group/

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


node* reversek(node* &head, int k)
{
	if(head == NULL)
		return NULL;


	node* prevptr = NULL;
	node* currptr = head;
	node* nextptr;
	int c=0;
	while(currptr != NULL && c < k)
	{
		nextptr = currptr->next;
		currptr->next = prevptr;

		prevptr = currptr;
		currptr = nextptr;
		c++;
	}

	head->next = reversek(nextptr,k);
	return prevptr;
}//T(n), S(n/k) - max stack n/k calls , in each call store S(1)

int main()
{
	node* head = NULL;

	insertAtTail(head, 1);
	insertAtTail(head, 2);
	insertAtTail(head, 3);
	insertAtTail(head, 4);

	print(head);

	//node* newhead = reverse(head);

	node* newhead = reversek(head,2);

	print(newhead);

	return 0;
}