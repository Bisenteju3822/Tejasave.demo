#include<iostream>
using namespace std;
int  main(){
	int rows;
	
	cout<<"Enter a patern of number";
	cin>>rows;
	for( int i=0;i<rows;++i){
		for(int j=0;j<i;++i)
		cout<<"*"<<"\t";
		
	}
	cout<<"\n";
}