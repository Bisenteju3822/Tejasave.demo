#include<iostream>
using namespace std;
int main(){
	int n, r,temp,sum=0;
	cin>>n;
	temp=n;
		r=n%10;
		sum=sum+(r*r*r);
		r=n/10;
		cout<<sum;
	
	while(n>0){
		
	
	if(sum==temp){
		cout<<"it is armstorng"<<endl;
		
	}
	
	else{
		cout<<"it is not armstong"<<endl;
	}
}
}