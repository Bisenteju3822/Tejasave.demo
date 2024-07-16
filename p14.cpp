#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"enter the number then paladoram it"<<endl;
	cin>>n;
	
	int h,t,o;
	h=n%10;
	cout<<h<<endl;
	t=(n%100)/10;
	cout<<t<<endl;
	o=n/100;
	cout<<o<<endl;
	cout<<h<<t<<o<<endl;
	if(h==o){
		cout<<"it is palladrom"<<endl;
	}
	
	else{
		cout<<"It is not palladrom"<<endl;
	}
	
}