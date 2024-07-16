#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"enter your number"<<endl;
	cin>>n;
	int *ptr;//wild pointer
	ptr =&n;
	cout<<ptr<<endl;
	cout<<*ptr<<endl;
	*ptr=*ptr+6;
	cout<<n<<endl;
	int n1=20;
	ptr=&n1;
	cout<<ptr<<endl;
	cout<<*ptr<<endl;
	ptr=NULL;//null pointer

}
