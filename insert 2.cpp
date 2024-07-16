 #include<iostream>
using namespace std;
int main(){
	int i;
	int j;
	int key;
	int flag=0;
	 int arr[5]={4,7,8,7,5};
	for(i=1;i<5;i++){
		key=arr[i];
		j=i-1;
		cout<<"pass"<<i<<endl;
			flag=0;
		
	
		while(j>=0&&arr[j]>key){
			arr[j+1]=arr[j];
			j=j-1; 
			flag=1;
	}
		
		
		
		}
		arr[j+1]=key;
		if(flag==0);
		for(i=0;i<5;i++){
			cout<<arr[i]<<endl;
			cout<<flag<<endl;
			
	
	}
	
	
	}

	

	