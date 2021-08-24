//https://www.geeksforgeeks.org/print-left-view-binary-tree/
//https://leetcode.com/problems/find-bottom-left-tree-value/

#include<bits/stdc++.h>
#include<iostream>
using namespace std;

struct node{
	int data;
	struct node* left;
	struct node* right;

	node(int val)
	{
		data = val;
		left = NULL;
		right = NULL;
	}
};

void leftView(node* root)
{
	if(root == NULL)
		return;

	queue<node*> q; node* n;
	q.push(root);

	while(!q.empty())
	{
		int size = q.size();
		for(int i=0;i<size;i++)
		{
			n = q.front();
			q.pop();
			if(i == 0)
				cout<<n->data<<endl;
			if (n->left)
				q.push(n->left);
			if(n->right)
				q.push(n->right);
		}
	}
}//T(n)
//S(n), queue size


int main()
{

	struct node* root = new node(5);
	root->left = new node(3);
	root->right = new node(6);

	root->left->left = new node(2);
	root->left->right = new node(4);

	leftView(root);

	return 0;
}
