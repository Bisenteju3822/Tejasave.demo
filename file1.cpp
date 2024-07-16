#include<iostream>
#include<fstream>
using namespace std;
int main(){
	int pid;
	int price;
	string ch="y";
	string name;
	
	ofstream out("data.txt");
	while(ch=="y"){
		
		
		cout<<"Enter your product id"<<endl;
		cin>>pid;
		cout<<"Enter product name"<<endl;
		cin>>name;
		cout<<"enter your  product price"<<endl;
		cin>>price;
		out<<pid<<"\t"<<name<<"\t"<<price<<endl;
		cout<<"Data written in file"<<endl;
		cout<<"Do u want to continue (y/n)"<<endl;
		cin>>ch;
	
	out<<"helllo user THis is for testing";
	cout<<"file Created "<<endl;
}

out.close();
}