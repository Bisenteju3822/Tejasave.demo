#include<iostream>
using namespace std;
int main(){
	int age;
	cout<<"Enter your age"<<endl;
	cin>>age;
	try{
	
	if(age>18 &&age<80){
		cout<<"valid age  group"<<endl;
		
	}
	else{
		throw age;
	}
}
catch(int error){
	cout<<"zError:ae should be>=18 and ,=80"<<"\t"<<error<<endl;
	
}
cout<<"process endl"<<endl;
}