//https://www.geeksforgeeks.org/construct-a-binary-tree-from-postorder-and-inorder/
//https://leetcode.com/problems/construct-binary-tree-from-inorder-and-postorder-traversal/

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

int search(int inorder[], int start, int end, int curr)
{
	for(int i=start;i<=end;i++)
	{
		if(inorder[i] == curr)
			return i;
	}
	return -1;
}//can use unordered map to optiize the search to T(1)

node* buildTree(int postorder[], int inorder[], int start, int end)
{
	static int idx = 4;
	if(start>end)
		return NULL;
	int curr = postorder[idx];
	idx--;
	node* n = new node(curr);
	if(start == end)
		return n;
	int pos = search(inorder, start, end, curr);
	n->right = buildTree(postorder, inorder, pos+1, end);
	n->left = buildTree(postorder, inorder, start, pos-1);
	return n;
}

void inorderPrint(struct node* root)
{
	if(root == NULL)
		return;
	inorderPrint(root->left);
	cout<<root->data<<" ";
	inorderPrint(root->right);
}//T(n)

int main()
{

	int postorder[] = {4, 2,5,3,1};
	int inorder[] = {4,2,1,5,3};

	node* root = buildTree(postorder, inorder, 0, 4);

	inorderPrint(root);

	return 0;
}

//T(n^2)
//O(h)- Worst = O(n), Best = O(logn)