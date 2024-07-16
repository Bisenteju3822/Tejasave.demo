#include<iostream>
using namespace std;
class A{
	
	public:
		A(){		
		cout<<"Enter your car"<<endl;
	}
		
};
class B :public A{
	public:
	B(){
		
		cout<<"Enter your number"<<endl;
	}
	
	
};
class D: public B{
	public:
	D(){
		cout<<"Call the coonstructor D"<<endl;
	}
};
class C:public A{
	
	C(){
		cout<<"caal the C constructor"<<endl;
	}
};
class E: public C{
	E(){
		cout<<"Enteer the constructor E"
	}
};
int main(){
	D obj;
	E obj1;
}