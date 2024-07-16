#include<iostream>
using namespace std;


class box{
	public:
	
	int record;
	box *left;
	box *right;
};

int main(){

	int no;
	cout<<"it is the value grater thean or small"<<endl;
	cin>>no;
	box *n5=new box;
	n5->record=no;
	n5->left=NULL;
	n5->right=NULL;
	box *root =NULL;
	
	if(root==NULL){
		root=n5;
		cout<<n5->record<<endl;
		
	}
	else if(no>root->record){
		root->right=n5;
		cout<<n5->record<<endl;
		cout<<root->right<<endl;
	}
	
	
	else if(no<root->record){
		root->left=n5;
		cout<<n5->record<<endl;
		cout<<root->left<<endl;
		
	}	
	}
	
	
