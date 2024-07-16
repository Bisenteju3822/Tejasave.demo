#include<iostream>
using namespace std;
int main(){
	int arr[6]={4,1,3,5,8,7};
	 int *ptr;
	for(int i=0;i<6;i++){
	
	ptr=&arr[i];
	
	cout<<ptr<<endl;
	cout<<*ptr<<endl;
}
}
