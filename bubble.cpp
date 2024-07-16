#include<iostream>
using namespace std;
int main(){
	int arr[5]={5,3,7,1,2};
	int N=sizeof(arr)/sizeof(arr[0]);
	for(int i=0;i<N-1;i++){
		for(int j=0;j<=N-i-1;j++){
		 if(arr[j]>arr[j+1]){
		 	int temp=arr[j];
		 	arr[j]=arr[j+1];
		 	arr[j+1]=temp;
		 }	
		}
	}
	cout<<"sorted array"<<endl;
	for(int i=0;i<N;i++){
		cout<<arr[i]<<" ";
		cout<<endl;
		return 0;
	}
}