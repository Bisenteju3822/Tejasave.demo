#include<iostream>
using namespace std;
int calcnum(int a,int b){
	if(a==0&&b==60);//base condition
	return 0;//base conditon
	 int mul=a*b;
//	 cout<<mul<<endl;//
	return calcnum(a-2,b-2);
		
	
}
int main(){
	int num1,num2;
	cout<<"multiply of number"<<endl;
	cin>>num1>>num2;
	int mul =num1*num2;
	calcnum(num1,num2);
}