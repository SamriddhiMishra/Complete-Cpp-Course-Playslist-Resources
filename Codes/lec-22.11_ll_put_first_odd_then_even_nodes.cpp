//Put Even nodes after Odd nodes
//https://www.geeksforgeeks.org/rearrange-a-linked-list-such-that-all-even-and-odd-positioned-nodes-are-together/
//https://leetcode.com/problems/odd-even-linked-list/
//https://gist.github.com/SuryaPratapK/053d60b845ff625f271b246fc4a3fae5
//https://www.geeksforgeeks.org/segregate-even-and-odd-elements-in-a-linked-list/
//https://www.geeksforgeeks.org/alternate-odd-even-nodes-singly-linked-list/

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

void odd_even(node* &head)
{
	if(head == NULL)
		return;
	node* evenstart = head->next;
	node* odd = head; node* even = evenstart;

	while(odd->next != NULL && even->next != NULL)
	{
		odd->next = even->next;
		odd = odd->next;
		even->next = odd->next;
		even = even->next;
	}
	if(even != NULL)
		even->next = NULL;

	odd->next = evenstart;
}//T(l)

int main()
{
	node* head = NULL;

	insertAtTail(head, 1);
	insertAtTail(head, 2);
	insertAtTail(head, 3);
	insertAtTail(head, 4);
	insertAtTail(head, 5);
	insertAtTail(head, 6);
	insertAtTail(head, 7);

	print(head);

	odd_even(head);

	print(head);

	return 0;
}