#include<iostream>
using namespace std;
int main(){
	int arr[5]={2,1,5,4,7};
	int min=arr[0];
	for(int i=0;i<5;i++){
		 if(min<arr[i]){
		 min=arr[i];
		 	
		 }
		
	}
	cout<<min<<endl;
}