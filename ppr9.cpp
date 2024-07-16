#include<iostream>
using namespace std;
int main(){
	int num;
	cout<<"enter your number"<<endl;
	cin>>num;
	int h=num/100;
	int t=(num/10)%10;
	int u=num%10;
	int reverse=h*1+t*10+u*100;
	cout<<reverse<<endl;
	 int sum=u+t+h;
	cout<<sum;

}