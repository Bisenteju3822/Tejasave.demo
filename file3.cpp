#include<iostream>
#include<fstream>
using namespace std;
struct Product{
	int pid;
	string name;
	int price;
};
class ProductDetail {
	struct Product p;
	public:
		void setProduct(){
			cout<<"enter product id"<<endl;
			cin>>p.pid;
			cout<<"enter your name"<<endl;
			cin>>p.name;
			cout<<"enter your price"<<endl;
			cin>>p.price;
			
		}
		void writeProduct(){
			ofstream out("product.txt",ios::app);
			out<<p.pid<<"\t"<<p.name<<"\t"<<p.price<<endl;
			cout<<"Data written in file"<<endl;
			out.close();
			
		}
		void readProduct(){
			ifstream in("product.txt");
			string str;
			while(getline(in,str)){
				
			cout<<str<<endl;
			
			
		}
		in.close();
	}
		
};



int main(){


ProductDetail obj;
obj.setProduct();
obj.writeProduct();
obj.readProduct();


	
}
