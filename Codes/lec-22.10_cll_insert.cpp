//Circular Linked List
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
	node* temp = head;
	do{
		cout<<temp->data<<"->";
		temp = temp->next;
	}
	while(temp != head);

	cout<<"NULL"<<endl;
}//O(n)

void insertAtHead(node* &head, int val)
{
	node* n = new node(val);
	if(head == NULL)
		{head = n; head->next = head; return;}

	node* temp = head;
	while(temp->next != head)
		temp = temp->next;
	n->next = head;
	temp->next = n;
	head = n;
	temp=NULL;
	delete temp;
}

void insertAtTail(node* &head, int val)
{
	node* n = new node(val);
	if(head == NULL)
	{
		head = n;
		head->next = head;
		return;
	}
	node* temp = head;
	while(temp->next != head)
		temp = temp->next;
	temp->next = n;
	n->next = head;
	temp=NULL;
	delete temp;
}//O(n)

int getLength(node* head)
{
	int count = 0;
	while(head != NULL)
	{
		head = head->next;
		count++;
	}
	return count;
}//T(n)


int main()
{
	node* head = NULL;

	insertAtTail(head, 1);
	insertAtTail(head, 2);
	insertAtTail(head, 3);
	insertAtTail(head, 5);
	insertAtTail(head, 6);

	print(head);

	insertAtHead(head, 7);

	print(head);
	//print(head->next);	

	return 0;
}