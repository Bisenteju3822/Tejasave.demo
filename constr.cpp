#include<iostream>
using namespace std;
class car{
	string name;
	string model;
	int price;
	public:
	

car(){
	cout<<"constructor called"<<endl;
 name="rolls royal";
 model="ethernof";
 price= 4567899;
 
 ~car(){
 	cout<<"enter the distructor"<<endl;
 }	
	
}
void print(){
	
	cout<<"Enter yur car name"<<"\t"<<name<<endl;
	cout<<"enter yoyur car model;"<<model<<endl;
	cout<<"enter yoyr car price"<<price<<endl;
	
	
}
};
int main(){
	
	car obj;
	obj.print();
}