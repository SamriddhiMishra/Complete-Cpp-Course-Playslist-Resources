//https://www.geeksforgeeks.org/print-nodes-distance-k-given-node-binary-tree/
//https://www.geeksforgeeks.org/print-nodes-distance-k-leaf-node/
//https://leetcode.com/problems/all-nodes-distance-k-in-binary-tree/

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

//case1
void printSubtreeNodes(node* root, int k)
{

	if(root == NULL || k<0)
		return;

	if(k == 0)
		{cout<<root->data<<" "; return;}

	printSubtreeNodes(root->left, k-1);
	printSubtreeNodes(root->right, k-1);
}//T(n) - traverse all nodes in tree/subtree

//case2
int printNodesAtk(node* root, node* target, int k)
{
	if(root == NULL)
		return -1;

	if(root == target)
	{
		printSubtreeNodes(root, k);
		return 0;
	}

	int dl = printNodesAtk(root->left, target, k);
	if(dl != -1)
	{
		if(dl +1 == k)
			cout<<root->data<<" ";
		else
			printSubtreeNodes(root->right, k-dl-2);
		return dl+1;
	}

	int dr = printNodesAtk(root->right, target, k);
	if(dr != -1)
	{
		if(dr +1 == k)
			cout<<root->data<<" ";
		else
			printSubtreeNodes(root->left, k-dr-2);
		return dr+1;
	}
	return -1;
}//T1(n) = T1(k) + T1(n-1-k) +1  
//T2(n)  for print nodes in subtree, in worst case combining all calls we can say the whole tree is traversed. So O(n)
//T(n) = T1(n) + T2(n) = O(n)
//At first look the time complexity looks more than O(n),
//but if we take a closer look, we can observe that no node is traversed more than twice. 
//Therefore the time complexity is O(n).

int main()
{

	struct node* root = new node(1);
	root->left = new node(2);
	root->right = new node(3);

	root->left->left = new node(4);

	printNodesAtk(root, root->left, 1);
	

	return 0;
}

//S(n) - max stack