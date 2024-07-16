//rite a program to checkvit palladrom or not??
//
#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"Enter a number"<<endl;
	cin>>n;
		int h=n/100;
	int t=(n/10)%10;
	int u=n%10;
	int reverse=h*1+t*10+u*100;
	cout<<reverse;
	cout<<h<<endl;
	cout<<u<<endl;
	
	   
	if(h=u){
		cout<<"it is parandrom"<<endl;
		
	}
	else{
		cout<<"it is not paladrom"<<endl;
	}
	
	
}
	
