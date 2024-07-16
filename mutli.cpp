#include<iostream>
using namespace std;
class Animals{
	protected:
		void run(){
			
			cout<<"Enter your run "<<endl;
			
		}
	
	
};
class Dog :protected Animals{
	public:
	
	void bark(){
		cout<<"enter your bark'"<<endl;
			}
};

class Bulldog: public Dog{
	
};
int main(){
	
	Bulldog obj;
	obj. run();
	obj.bark();
	
}