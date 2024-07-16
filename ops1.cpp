#include<iostream>
using namespace std;
class calculater{
	public :
		void add(){
			
			cout<<"calculate theclass and method called"<<endl;
			
		}
	void add(int n1,int n2){
	 int	r=n1+n2;
		cout<<"sum of a two number"<<r<<"\t"<<endl;
		
	}
	void add ( int n1,int n2,int n3){
		 int r=n1+n2+n3;
		cout<<"Sum of threr number"<<r<<"\t"<<endl;
		
	}
	void add(int n1,float n2){
  int	r=n1+n2;
	cout<<"Sum of twoo number"<<r<<"\t"<<endl;
	
}
};
int main(){
	calculater c;
	c.add();
	c.add(100,200);
	c.add(100,456,67);
	c.add(100,200,30.4);
}