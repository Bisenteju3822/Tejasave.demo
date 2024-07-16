#include <bits/stdc++.h>

using namespace std;
void selectionSort(int arr[],int n){

int i,j,min_indx;
   for(i=0;i<n-1;i++){
    min_indx=i;
for(j=i+1;j<n;j++){
if(arr[min_indx]>arr[j]){
    min_indx=j;

} 
if(min_indx!=i){
    swap(arr[min_indx],arr[i]);
}
}


}
}
void printArray(  int arr[],int size){
    int i;
    for(i=0;i<size;i++){
     cout<<arr[i]<<" ";
     cout<<endl;
    }
}
int main(){
	int arr[]={65,44,22,67,84};
	int n=sizeof(arr)/sizeof(arr[0]);
    selectionSort(arr,n);
    cout<<"selection sort"<<endl;
    printArray(arr,n);
    return 0;

}

