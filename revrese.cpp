#include<iostream>
using namespace std;
int main(){
	 int arr[5]={1,2,3,4,5};
	int n;
	int start;
	int end;
	for(int i;i<=5;i++){
		end=arr[4];
		end--;
		start=arr[0];
		start++;
		cout<<end<<endl;
		cout<<start<<endl;
	}
	cout<<endl;
}