#include<iostream>
using namespace std;
int main(){
	string name="tejasavebisen";
	int length=0;
	cout<<"find the length of string"<<endl;
	for(int i=0;name[i]!='\0';i++){
		length++;
	}
	cout<<length<<endl;
}