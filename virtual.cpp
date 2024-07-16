#include<iostream>
using namespace std;
class shape{
	public:
		void area(){
			
			cout<<"area of shape"<<endl;
		}
	
	
	
};
class circle :public shape{
	public:
		void area(){
			int area;
			int r;
			int const pii=3.14;
			cout<<"enter the value of r"<<endl;
			area =r*pii;
			cout<<"area of circle"<<area<<endl;
		}
	
	
};
int main(){
	
	circle *obj;
	obj=new circle;
	obj->new circle;
	;
}
