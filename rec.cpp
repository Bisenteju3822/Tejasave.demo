#include<iostream>
using namespace std;
int sqrNumber(int n){
	if(n==0)// base condition
		return 0;// base condition
	
	 int sqr=n*n;
	cout<<sqr<<endl;
	return sqrNumber(n-1);
	
}
int main(){
	int num;
	cout<<"enter the sqr number"<<endl;
	cin>>num;
	sqrNumber(num);
}