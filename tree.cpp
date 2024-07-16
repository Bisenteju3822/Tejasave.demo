#include<iostream>
using namespace std;
class Node{
	public:
	int data;
	Node *left;
	Node *right;
	
	
};
int  main(){
/*	Node *root=new Node();
	root->data=10;
	root->left=NULL;
	root->right=NULL;
	
	Node *n1=new Node();
	n1->data=8;
	n1->left=NULL;
	n1->right=NULL;
	
	root->left= n1;
	
	Node *n2 =new Node();
	n2-> data=20;
	n2-> left=NULL;
	n2->right=NULL;
	
	root->right=n2;
	
	Node *n3 =new Node();
	n3->data=25;
	n3->left=NULL;
	n3->right=NULL;
	
	n2->right=n3;
	
//	cout<<<<endl;
	//	cout<<<<endl;

 Node *n4 =new Node();
 n4->data=18;
 n4->left=NULL;
 n4->right=NULL;
 
	n2->left=n4;*/
	
//	cout<<n2->left->data<<endl;
	
	
	
	
int  no;
cout<<"enter a number to add no in tree"<<endl;
cin>>no;

Node *newnode =new Node();
newnode->data=no;
newnode->left =NULL;
newnode->right=NULL;

Node *root=NULL;

if(root==NULL){
	root=newnode;
	cout<<root->data<<endl;
	cout<<root<<endl;
	cout<<newnode<<endl;
}
else{

	if(no<root->data){
		root->left=newnode;
		cout<<newnode->data<<endl;
		cout<<root->right<<endl;
		cout<<newnode<<endl;
		
		
	}
	else{
		root->right=newnode;
		cout<<newnode->data<<endl;
		cout<<root->right<<endl;
		cout<<newnode<<endl;
	}
	
	
}



}



	

	
	
	
