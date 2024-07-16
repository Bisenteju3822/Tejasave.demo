#include<iostream>
using namespace std;
class Node{
	public:
		int data;
		Node
		Node
};








Node * insert (Node *root,int data)
	
{
	if(root==NULL){
		return new Node(data);
		
	}
	if(data>root->data){
		root->rnode =insert(root->rnode,data);
	}
	return root;
	
}
void inOrder(Node *root){
	while(root!=NULL){
		inOrder(root->lnode);
		cout<<root->data<<" ";
		inOrder(root->rnode);
	}
}
int main(){
	Node *root =NULL;
	root=insert(root,50);
	insert(root,60);
	insert(root,40);
	insert(root,25)
	insert(root ,80);
	insert(root,35);
	inOrder (root);
	
}