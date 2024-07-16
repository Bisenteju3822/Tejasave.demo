#include<iostream>
#include<string>
using namespace std;
int main(){
	string str="TejuisBest";
	
	cout<<"toogle the string"<<endl;
	for(int i=0;str[i]!='\0';i++){
		
		if(islower(str[i])){
			str[i]=toupper(str[i]);
			
		}
	 else	if(isupper(str[i])){
			str[i]=tolower(str[i]);
			
		}
		
	}
	cout<<str<<endl;
	return 0;
}