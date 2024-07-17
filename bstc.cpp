#include<iostream>
using namespace std;
class Node
{
	public:
	int record1;
	Node *lnode;
	Node *rnode;
	Node(int value)
	{
		record1 = value;
		lnode =NULL;
		rnode = NULL;
	}
	
};
Node* insert(Node *root,int record1) 
{
	 if (root == NULL) 
	{
        return new Node(record1);
    }

    if (record1 < root->record1) 
	{
        root->lnode = insert(root->lnode, record1);
    } 
	else if (record1 > root->record1)
	{
        root->rnode = insert(root->rnode,record1);
    }

    return root;
	 
}
void inOrder(Node *root)
{
	if(root != NULL)
	{
		inOrder(root->lnode);
		cout<<root->record1<<"  ";
		inOrder(root->rnode);
	}
}
int main()
{
    Node* root = NULL;
    root = insert(root, 50);
    insert(root, 30);
    insert(root, 20);
    insert(root, 40);
    insert(root, 70);
    insert(root, 60);
    insert(root, 80);

    cout << "In-order traversal of the BST: ";
    inOrder(root);
    cout <<endl;
}