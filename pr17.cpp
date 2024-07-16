#include<iostream>
using namespace std;
int main(){
	int n;
	
	cin>>n;
	if(n>=100&&n<=999){
	 int h=n/100;
 int	t=(n/10)%10;
 int	o=n%10;
  int max=h;
	if(max<h){
		cout<<"it is grater"<<endl;
		
	}
	if(max<o){
		cout<<"it is graterr"<<endl;
		
	}
	if(max<t){
		cout<<"it is greater"<<endl;
	}
		
	}
	
	
	
	else{
		cout<<"invalid value"<<endl;
	}
}