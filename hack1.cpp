#include<iostream>
#include<string>
using namespace std;
int main(){
    int n;
    string str[9]={"one","two","three","four","five","six","seventh","eight","nine"};
    for(  n=1;n<=9;n++){
	
      if (n>=1&&n<=9){
       cout<<str[n]<<endl;
   }
    else {
        cout<<"greater than 9"<<endl;
    }
       
    }
    
    return 0;
}
