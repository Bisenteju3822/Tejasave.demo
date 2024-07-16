#include<iostream>
using namespace std;
string_remove_non_alphabats(string str ){
	 string result="";
	for( char c:str){
		if(isalpha(c)){
			result+=c;
	
}
}

return result;
}
int main(){
	string str ="geeks#$%gtolff";
	cout<<string_remove_alpahabats<<endl;
}
