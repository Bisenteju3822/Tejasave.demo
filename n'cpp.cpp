#include<iostream>
#include<string>
using namespace std;
class student{
	public :
	int rollno ;
	string name;
	string batch;
	
	
	student(){
		cout<<"employe class default constructor"<<endl;
	}
	student (int n,string s,string b){
			rollno=n;
			name=s;
			batch =b;
			
		}
		void print(){
			cout<<"employee Id"<<rollno<<endl;
				cout<<"employee Name"<<name<<endl;
					cout<<"employee salary"<<batch<<endl;
		}
	

void setvalue(){
	cout<<"Enter the value of it"<<endl;
	cin>>rollno;
	cin>>name;
	cin>>batch;
	
}

};
class node{
	public:
		student obj;
		node *next;
		
};

int main(){
	student e1(111,"Amit Kumar","hello");
	student e2(222,"rohit singh","hello");
	student e3(333,"rohit kumar","hello");
	
	
}
node *n1=new node();
  int n1->obj=e1;
n1->next=NULL;
node *n2 =new node;
 int n2->obj=e2;
n2->next=NULL;
//pointing to reference to next node
n1->next =n2;


node *n3 =new node();
 int n3->data =p3;
n3->next=NULL;
n2->next=n3;


node *current =new node();
current=n1;
while(current!=NULL){
	current->setvalue();
	current=current->next;
}









