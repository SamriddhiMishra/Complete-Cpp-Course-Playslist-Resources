//Append Last k nodes to front of list
//https://www.geeksforgeeks.org/append-the-last-m-nodes-to-the-beginning-of-the-given-linked-list/
//https://www.geeksforgeeks.org/move-last-element-to-front-of-a-given-linked-list/

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

node* appendLastKFront(node* &head, int k, int l)
{
	k = k%l;
	if (k==0)
		return head;
	node* tail = NULL; node*  newtail = NULL; node*  newhead = NULL;
	int count =1;
	node* temp = head;
	while(count != l)
	{
		if(count == l-k)
		{
			newtail = temp;
			newhead = temp->next;
		}
		temp = temp->next;
		count++;
	}
	tail = temp;
	newtail->next = NULL;
	tail->next = head;
	return newhead;
}//T(n)


int main()
{
	node* head = NULL;

	insertAtTail(head, 1);
	insertAtTail(head, 2);
	insertAtTail(head, 3);
	insertAtTail(head, 4);

	print(head);

	int l = getLength(head);
	cout<<l<<endl;

	node* newhead = appendLastKFront(head, 4, l);

	print(newhead);

	return 0;
}