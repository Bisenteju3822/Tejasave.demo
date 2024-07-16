#include<iostream>
using namespace std;
int main(){
    int j=0;
char arr [50]={"Geeksforgeeks"};
for(int i=0;arr[i]!='\0';i++){
    if(arr[i]!='A'&&arr[i]!='a'&&arr[i]!='E'&&arr[i]!='e'
	 &&arr[i]!='i'&&arr[i]!='I'&&
	 arr[i]!='O'&&arr[i]!='o'&&arr[i]!='U'&&arr[i]!='u'){
	 
     arr[j++]=arr[i];
     arr[j]='\0';
     j++;
     ;
 }
     
     cout<<arr[j]<<endl;
}
return 0;

}