#include<iostream>
using namespace std;
int main(){
	int x,y,r;
	cout<<"Enter your value"<<endl;
	cin>>x>>y;
	try{
	
	if(y==0){
		throw y;
	}
		else{
			 double r=x/y;
			 cout<<"result"<<r<<endl;
		}
}
	catch(int error){
		cout<<"error"<<error<<endl;
	}
	cout<<"process over"<<endl;
	cout<<r<<endl;
}