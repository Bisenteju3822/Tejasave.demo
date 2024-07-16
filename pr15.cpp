#include<iostream>
using namespace std;
int main(){
	int bs;
	float pf;
		int DA=500;
		 float gs;
		 float ns;
	cout<<"Enter basic salary"<<endl;
	cin>>bs;
	cout<<bs<<endl;
	 int ta=bs*10/100;
	 pf=bs*7.8/100; 
	cout<<ta<<endl;
	cout<<pf<<endl;
	gs=bs+DA+ta;
	cout<<gs<<endl;
	ns=gs-pf;
	cout<<ns<<endl;
	

}