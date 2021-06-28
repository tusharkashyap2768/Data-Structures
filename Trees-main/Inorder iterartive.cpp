#include<bits/stdc++.h>
#include <stack>
using namespace std;
// Data structure to store a binary tree node
struct Node
{
	int data;
	Node *left, *right;

	Node(int data)
	{
		this->data = data;
		this->left = this->right = nullptr;
	}
};

// Iterative function to perform inorder traversal on the tree
void inorderIterative(Node* root)
{
	// create an empty stack
	stack<Node*> stack;

	// start from the root node (set rootent node to the root node)
	// Node* curr = root;

	// if the current node is null and the stack is also empty, we are done
	while (!stack.empty() || root != nullptr)
	{
		// if the rootent node exists, push it into the stack (defer it)
		// and move to its left child
		if (root != nullptr)
		{
			stack.push(root);
			root = root->left;
		}
		else {
			// otherwise, if the rootent node is null, pop an element from the stack,
			// print it, and finally set the rootent node to its right child
			root = stack.top();
			stack.pop();
			cout << root->data << " ";

			root = root->right;
		}
	}
}

int main()
{
	/* Construct the following tree
			   1
			 /   \
			/     \
		   2       3
		  /      /   \
		 /      /     \
		4      5       6
			  / \
			 /   \
			7     8
	*/

	Node* root = new Node(1);
	root->left = new Node(2);
	root->right = new Node(3);
	root->left->left = new Node(4);
	root->right->left = new Node(5);
	root->right->right = new Node(6);
	root->right->left->left = new Node(7);
	root->right->left->right = new Node(8);

	inorderIterative(root);

	return 0;
}
