#include<iostream>
using namespace std;
class Node{
	public:
	int record;
	Node *left;
	Node *right;
	
};
int main(){
	
	 Node *root =new Node();
	 root->record=100;
	  root->left;
	  root->right;
	  
	  Node *n1=new Node();
	  n1->record=70;
	  n1->left;
	  n1->right;
	  
	Node *n2=new Node();
	n2->record=60;
	n2->left;
	n2->right;
	
	Node *n3 =new Node();
	n3->record=50;
	n3->left;
	n3->right;
	
	Node *n4=new Node();
	n4->record=44;
	n4->left;
	n4->right;
	
	 root->left=n1;
	 n1->right=n2;
	  
	 cout<<root->left<<endl;
	 cout<<root->left->record<<endl;
	 cout<<n1->right->record<<endl; 
	 
	 

	 
	 
	 
	
}