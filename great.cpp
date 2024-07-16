#include<iostream>
using namespace std;
int main(){
	int max=3;
	int arr[4]={1,2,3,4};
	int largest=arr[0];
	int size=sizeof(arr)/sizeof(arr[0]);
	for( int i=1;i<=size;++i){
		if(arr[i]>largest){
			largest=arr[i];
			
		}
	}
		cout<<"Enter a largest element";
		
}