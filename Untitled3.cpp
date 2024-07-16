#include<iostream>
using namespace std;
int main(){
	int *ptr;
	int **ptr1;
	int a=20;
	ptr=&a;
	cout<<ptr<<endl;
	cout<<*ptr<<endl;
	cout<<ptr1<<endl;
	cout<<*ptr1<<endl;
	cout<<**ptr1<<endl;
	
}