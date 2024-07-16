#include<iostream>
using namespace std;
int main()
{
	int a=4562;
	cout<<"the number of print 1000 500 100 50 40 "<<endl;
	
	 int thousand=a/1000;
	 int thousand1=a%1000;
	
	cout<<thousand<<endl;
	cout<<thousand1<<endl;
	
	int fthousand=thousand1%500;
	int fthousand1=thousand1/500;
	cout<<fthousand<<endl; 
	cout<<fthousand1<<endl;
	int hundred=fthousand%100;
	int hundred1=fthousand/100;
	cout<<hundred<<endl;
	cout<<hundred1<<endl;
	int twenty=hundred%20;
	int twenty1=hundred/20;
	cout<<twenty<<endl;
	cout<<twenty1<<endl;
}
	