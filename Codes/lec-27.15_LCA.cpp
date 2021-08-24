//https://www.geeksforgeeks.org/lowest-common-ancestor-binary-tree-set-1/
//https://www.geeksforgeeks.org/lowest-common-ancestor-in-a-binary-search-tree/
//https://leetcode.com/problems/lowest-common-ancestor-of-a-binary-tree/

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

bool getPath(node* root, int key, vector<int> &path)
{

	if(root == NULL)
		return false;
	path.push_back(root->data);
	if(root->data == key)
		return true;

	if(getPath(root->left, key, path) || getPath(root->right, key, path))
		return true;

	path.pop_back();
	return false;

}//Time - O(n)
//T(n) = T(k) + T(n – k – 1) + c
//Where k is the number of nodes on one side of root and n-k-1 on the other side.
//Space - O(1)- constant + O(h)- function call stack
//best - h=logn O(logn)
//worst - h=n O(n)

int LCA(node* root, int n1, int n2)
{
	vector<int> path1, path2;

	if(!getPath(root, n1, path1) || !getPath(root, n2, path2))
		return -1;
	int pc;
	for(pc =0; pc<path1.size() && pc<path2.size(); pc++)
	{
		if(path1[pc] != path2[pc])
			break;
	}
	return path1[pc-1];
}//T(n) = O(2n)(find paths for two nodes) + O(n)(traverse the paths)
//S(n) = O(n) -of getPath and O(2n) - of vectors
//Here traversing the nodes(whole tree) multiple times, for finding paths of nodes  

node* LCA2(node* root , int n1, int n2)
{
	if(root == NULL)
		return NULL;

	if(root->data == n1 || root->data == n2)
		return root;

	node* leftLCA = LCA2(root->left, n1, n2);
	node* rightLCA = LCA2(root->right, n1, n2);

	if(leftLCA && rightLCA)
		return root;

	if(leftLCA)
		return leftLCA;
	return rightLCA;
}//T(n) = T(k) + T(n – k – 1) + c
//T(n) , traversing all nodes
//But single traversal of tree this time
//S(n) - call stack

int main()
{

	struct node* root = new node(1);
	root->left = new node(2);
	root->right = new node(3);

	root->left->left = new node(4);
	root->left->right = new node(5);
	root->right->left = new node(6);
	root->right->right = new node(7);

	node * root2 = new node(1);
	root2->left = new node(2);
	root2->right = new node(4);
	root2->left->left = new node(3);

	int lca = LCA(root2, 4, 3);
	if(lca == -1) //Assuming no negative node value, i.e why returning -1 else we can return anything we want as flag
		cout<<"LCA doesn't exits"<<endl;
	else
		cout<<lca<<endl;

	node* lca2 = LCA2(root2, 4 ,3);
	if(lca2 == NULL) 
		cout<<"LCA doesn't exits"<<endl;
	else
		cout<<lca2->data<<endl;

	return 0;
}
