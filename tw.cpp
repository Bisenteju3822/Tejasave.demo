#include<iostream>
using namespace std;
int main(){
	int arr[2][3];
	cout<<"Enter the element"<<endl;
	cin>>arr[2][3];
	for(int i=0;i<=3;i++){
		for(int j=0;j<=3;j++){
			if(arr[i][j]%2==0){
				arr[i][j]=0;
			}
		else{
				arr[i][j]=1;
			}
		
		}
	}
		cout<<arr[i][j]<<endl;
}
