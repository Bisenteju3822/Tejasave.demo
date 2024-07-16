#include<iostream>
using namespace std;
class animal{
	public:
		void run(){
			cout<<"rum is best"<<endl;
			
		}
	
	
	
	
	
	
};
class dog {
	public:
		void bark(){
			cout<<"it is bark"<<endl;
			
			
			
		}
};
class bulldog :public animal public dog{
	public:
		void bark(){
			cout<<"we have bark"<<endl;
			
			
		
		void run(){
			cout<<"we have run"<<endl;
		}
	
};

		
	
	
	





int main(){
	bulldog obj;
	obj.dog;
	obj.animal;
	
}