//https://www.geeksforgeeks.org/find-distance-between-two-nodes-of-a-binary-tree/
//https://www.geeksforgeeks.org/shortest-distance-between-two-nodes-in-bst/

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

node* LCA(node* root, int n1, int n2)
{
	if(root == NULL)
		return NULL;

	if(root->data == n1 || root->data == n2)
		return root;

	node* leftLCA = LCA(root->left, n1, n2);
	node* rightLCA = LCA(root->right, n1, n2);

	if(leftLCA && rightLCA)
		return root;

	if(leftLCA)
		return leftLCA;
	return rightLCA;
}//T(n)
//S(n)

int findDist(node* root, int k, int dist)
{
	if(root == NULL)
		return -1;

	if(root->data == k)
		return dist;

	int left = findDist(root->left, k, dist+1);
	if(left != -1)
		return left;
	return findDist(root->right, k , dist+1);
}//Best find in leftmost- O(h) --O(logn), O(n)
//Worst need to traverse both left and right subtree of root i.e. entire tree so O(n)
//S(n)

int distBtwNodes(node* root, int n1, int n2)
{
	node* lca = LCA(root, n1, n2);//T(n)

	int d1 = findDist(lca, n1, 0);//T(n)
	int d2 = findDist(lca, n2, 0);//T(n)

	return d1+d2;
}//T(n)

int main()
{

	struct node* root = new node(1);
	root->left = new node(2);
	root->right = new node(3);

	root->left->left = new node(4);
	root->right->right = new node(5);


	cout<<distBtwNodes(root, 1,5 )<<endl;

	return 0;
}
//Space 
//S(n) + S(n) = S(n)
