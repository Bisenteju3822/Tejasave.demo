 //write a program to remove all character accept alphabat
 #include<iostream>
 #include<string>
 #include<cctype>
 using namespace std;
  string remove_character(string  nek){
 	string res ="";
 	for(char c:nek){
 		if(isalpha(c)){
 			res+=c;
		 }
		 
	 }
	 return res;
 }
 int main(){
 	string nek="eewgnwegoi49w-";
 	cout<<"remove the chsracter from string"<<remove_character(nek)<<endl;
 	
 }
 