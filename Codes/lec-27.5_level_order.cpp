//Level Order Traversal
//https://www.geeksforgeeks.org/level-order-tree-traversal/
//https://leetcode.com/problems/binary-tree-level-order-traversal/

#include<bits/stdc++.h>
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

void printLevelOrder(node* root)
{
	if(root == NULL)
		return;

	queue<node*> q;
	q.push(root);
	q.push(NULL);

	while(!q.empty())
	{
		node* n = q.front();
		q.pop();
		if(n != NULL)
		{
			cout<<n->data<<" ";
			if(n->left)
				q.push(n->left);
			if(n->right)
				q.push(n->right);
		}
		else if (!q.empty())
			q.push(NULL);
	}

}//T(n)

int main()
{

	struct node* root = new node(1);
	root->left = new node(2);
	root->right = new node(3);

	root->left->left = new node(4);
	root->left->right = new node(5);
	root->right->left = new node(6);
	root->right->right = new node(7);

	printLevelOrder(root);

	return 0;
}
//Time- O(n)
//Space - O(n) - Auxilliary , queue