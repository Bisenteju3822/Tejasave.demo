//WRITE A PROGRAM TO REOMVE VOWELS
#include<iostream>
using namespace std;
int main(){
 char arr[50]={"we have to learn the code easily"};
 for (int i;arr[i]!='\0';i++){
 	if(arr[i]=='A'&&arr[i]=='a'&&arr[i]=='E'&&arr[i]=='e'
	 &&arr[i]=='i'&&arr[i]=='I'&&
	 arr[i]=='O'&&arr[i]=='o'&&arr[i]=='U'&&arr[i]=='u'){
	 	cout<<"remove it"<<arr<<endl;
	 	
	 }
	 
 }
}