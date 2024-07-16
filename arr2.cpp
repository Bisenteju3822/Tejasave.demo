#include<iostream>
using namespace std;
int main(){
	string str="geeks for geeks";
	int length=0;
	

for ( int i=0;str[i]='\0';i++){
	if(isupper(str[i])){
		str[i]=tolower(str[i]);
	}
	else if(islower(str[i])){
		str[i]=toupper(str[i]);
	}
	cout<<str<<endl;
}
}