#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"ENTER YOUR VALUE"<<endl;
	cin>>n;
	try{
		if(n>0){
			cout<<"enter positive"<<endl;
			
		}
		else{
			throw n;
		}
	}
		catch(int error){
			cout<<"Error in negative"<<error<<endl;
			 
		}
		cout<<"process is comlplete"<<endl;
		
	
}
