#include<iostream>
using namespace std;
int main(){
	int i;
	int j;
	int min_index;
	 int arr[5]={8,3,4,6,5};//array declaration
	 	int n=sizeof(arr)/sizeof(arr[0]);//sizeof
	for(i=0;i<=n;i++){//size
	min_index=i;
	j=j
	for(j=i+1;j<n;j++){
		if(arr[min_index]>arr[j]){
			min_index=j;
		}
	//	cout<<"pass"<<i+1<<endl;
	}
	if(min_index!=i)
	swap(arr[min_index],arr[i]);
}
for(int k=0;k<n;k++){
	cout<<arr[k]<<"\t";
//	cout<<"pass"<<k<<endl;
}

cout<<endl;
}




	
	
	

