#include<iostream>
using  namespace std;
int main(){
	int sum=0;
	int arr[10]={1,2,3,4,5,6,7,8,9};
	
	int length=sizeof(arr)/sizeof(arr [0]);
	cout<<"Sum of number";
	
	for( int i=0;i<length;i++){
		sum=sum+arr[i];
		
	}
	cout<<sum;
}
