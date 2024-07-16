#include<iostream>
using namespace std;
int main(){
	char name[20];
	cout<<"Enter youyr name"<<endl;
	cin>>name;
	int len=strlen(name);
	

   try{
	if(len>=2){
		cout<<"valid string"<<endl;
		
	}
	else{
		throw name;
		
	}
}
	catch (...){
		cout<<"string lenght  should be len<=2"<<endl;
		
	}
	cout<<"process is over"<<endl;
	
}


