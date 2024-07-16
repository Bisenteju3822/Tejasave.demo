#include<iostream>
#include<thread>

using namespace std;
void print(){
	for(int i=1;i<=100;i++){
		cout<<"Loop executed"<<" "<<i<<" "<<"times"<<endl;
		
	}
	
		
}
void print1(){
	for(int j=1;j<=10;j++){
		cout<<"i love c++ "<<endl;
	}
}
int main(){
	thread th(print);
	thread th1(print1);
	th.join();
	cout<<"Processs Begin"<<endl;
	th1.join();
	cout<<"thread execution "<<endl;
	}