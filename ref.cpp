class Employee{
	public:
	int empId;
    string name;
	int salary;
	
		Employee(){
			cout<<"employee class default constructor"<<endl;
			
		}
		Employee (int n,string n,int s){
			empId=id;
			name=n;
			salary =s;
			
		}
		void print(){
			cout<<"employee Id"<<empId<<endl;
				cout<<"employee Name"<<empname<<endl;
					cout<<"employee salary"<<empsalary<<endl;
		}
};
class node{
	public:
		Employee obj;
		node *next;
		
};

int main(){
	Employee e1(111,"Amit Kumar",34000);
	Employee e2(222,"rohit singh",44000);
	Employee e3(333,"rohit kumar",54000);
}
node *n1=new node();
n1->obj=e1;
n1->next=NULL;
node *n2 =new node;
n2->obj=e2;
n2->next=NULL;
//pointing to reference to next node
n1->next =n2;

node *n3 =new node();
n3->data =p3;
n3->next=NULL;
n2->next=n3;

node *current =new node();
current=n1;
while(current!=NULL){
	current->data.print();
	current=current->next;
}











