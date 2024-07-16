#include<iostream>
using namespace std;
int main(){
	int a;
	int b;
	int c;
	cout<<"Enter three number"<<endl;
	cin>>a>>b>>c;
	if(a>b||a<b||a<c||a>c){
		cout<<"A is smaller"<<endl;
		cout<<"A is greater"<<endl;
	}
	else if(b<a||b<c||b>a||b>c){
		cout<<"b is greater"<<endl;
		cout<<"A is smaller"<<endl;
}
	else
	{
		cout<<"c is greater"<<endl;
		cout<<"c is smaeller"<<endl;
	}

}

  	
