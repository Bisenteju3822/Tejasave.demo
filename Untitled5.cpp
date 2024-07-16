#include<iostream>
#include<string>
using namespace std;


int main(){
	char str[10];
	cin>>str;
	int len=0;
	int i=0;
 while(str[i]<NULL){
		i++;
		len++;
	}
	cout<<len<<endl;
}