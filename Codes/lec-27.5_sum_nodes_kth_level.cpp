//Sum of nodes at Kth level
//https://www.geeksforgeeks.org/sum-of-all-nodes-at-kth-level-in-a-binary-tree/
//https://www.geeksforgeeks.org/sum-nodes-k-th-level-tree-represented-string/
//https://leetcode.com/problems/maximum-level-sum-of-a-binary-tree/


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

int sumAtK(node* root, int k)
{
	if(root == NULL)
		return -1;

	queue<node*> q;
	q.push(root);
	q.push(NULL);
	int l =0, s=0;
	while(!q.empty())
	{
		node* n = q.front();
		q.pop();
		if(n != NULL)
		{
			if(k == l)
				s += (n->data);
			if(n->left)
				q.push(n->left);
			if(n->right)
				q.push(n->right);
		}
		else if(!q.empty())
		{
			l++;
			q.push(NULL);
		}
	}
	return s;
}


int main()
{

	struct node* root = new node(1);
	root->left = new node(2);
	root->right = new node(3);

	root->left->left = new node(4);
	root->left->right = new node(5);
	root->right->left = new node(6);
	root->right->right = new node(7);

	cout<<sumAtK(root, 2)<<endl;

	return 0;
}
//Time- O(n)
//Space - O(n) - Auxilliary , queue