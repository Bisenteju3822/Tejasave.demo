#include<iostream>
using namespace std;
int partition(int low,int high,int arr[]){
 int x,y,pivot;
 pivot=arr[high];
 x=low-1;
 for( int y=low;y<=high-1;y++){
 	if(y<pivot){
 		x++;
 		swap(arr[x],arr[y]);
	 }
 }
 swap(arr[x+1],pivot);
 return x+1;
	
} 
void Quiksort(int high,int low,int arr[]){
	
	if(low<high){
		 int pos=partition;
		Quicksort(arr,low,pos-1);
		Quicksort(arr,pos+1,high);
		
	}
	}
}
int main(){
	int A;
	int B;
	int C;
	cout<<partition<<endl;
}