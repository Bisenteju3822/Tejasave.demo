#include<iostream>
using namespace std;
int main(){
	 int arr[5]={2,7,3,4,8};
	int key;
	int j;
	for( int i=1;i<=5;i++){
		key=arr[i];
		j=i-1;
		while(j>=0&&arr[j]>key){
			arr[j+1]=j;
			j=j-1;
		}
		arr[j+1]=key;
		
	cout<<key<<endl;
	} 


}