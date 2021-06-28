#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    struct Node * left;
    struct Node * right;
}node;
Node *create()
{
	Node *p;
	int x;
	cout<<"Enter data if not (enter -1 for no data):"<<endl;
	cin>>x;

	if(x==-1)
		return NULL;

	p=new Node;
	p->data=x;

	cout<<"Enter left child of :- "<<x<<endl;
	p->left=create();

	cout<<"Enter right child of :- "<<x<<endl;
	p->right=create();

	return p;
}

void preorder(Node *t)		//address of root node is passed in t
{
	if(t!=NULL)
	{
		cout<<t->data<<" ";		//visit the root
		preorder(t->left);		//preorder traversal on left subtree
		preorder(t->right);		//preorder traversal om right subtree
	}
}

int main()
{
	Node *root;
	root=create();
	cout<<"The preorder traversal of tree is:"<<"\n";
	preorder(root);

	return 0;
}
