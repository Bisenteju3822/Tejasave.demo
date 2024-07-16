#include<iostream>
using namespace std;
class Course

{ 
public:
	void register_course(){
		cout<<"student registwere with html"<<endl;
		
	}
	void register_course(string name){
		cout<< "the course register cslled"<<name<<endl;
		
	}
	void register_course(string name,int duration){
		cout<<"the course name and the duration"<<name <<duration<<endl;
	}
	
	
	
};
int main(){
	Course c;
	  c.register_course();
	 c.register_course("html");
	 c. register_ course("html",2);
	
}