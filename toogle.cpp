#include<iostream>
#include<string>
using namespace std;
int main(){
	char arr[25]={"geeks for geeks"};
	cout<<"we have to convert lower case to upper case"<<endl;
	for( int i;arr[i]!='\0';i++){
		if(islower(arr[i])){
			arr[i]=toupper(arr[i]);
			
		}
		else if(isupper(arr[i])){
			arr[i]=tolower(arr[i]);
		}
		
	}
	cout<<"toggle it"<<arr<<endl;
	return 0;
}
