 #include<iostream>
 using namespace std;
 int main(){
 
int i;
int j=2;
int count=0;
cin>>i;
while(j<=i){
	if(j%i==0){
		count++;
	}
	if(count==2){
		cout<<"it is prime"<<endl;
	}
	else{
		cout<<"it is not a prime"<<endl;
	}
	}
	cout<<count<<endl;
}