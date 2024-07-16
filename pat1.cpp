#include<iostream>
using namespace std;
int main (){
	int  rows,column,n;
	cout<<"Enter your pattern";
	cin>>n;
	for(  rows=1;rows<=n;rows++){
		for( column=1;column<=rows;column++){
			
		cout<<"*";
		
		}
		cout<<"\n";
		
	}
  return 0;	
}