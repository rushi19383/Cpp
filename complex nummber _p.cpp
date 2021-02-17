#include<iostream>
using namespace std;

class Complex{
	int a,b;

	public:
		void setnum(int x,int y){
			a=x;
			b=y;
		}
		void printnum(){
			cout<<"The no are "<<a<<" and "<<b<<"i"<<endl;
		}
		void addComp( Complex o1, Complex o2){
			cout<<"the sum is "<<endl;
			cout<<o1.a+o2.a<<endl;
			cout<<o2.b+o2.b<<endl;
			
		}
};



int main(){
	Complex obj1,obj2,obj3;
	cout<<"enter number";
	int m,n;
	cin>>m>>n;
	obj1.setnum(m,n);
	obj1.printnum();
	
	
	obj2.setnum(1,2);
	obj2.printnum();
	
	
	obj3.addComp(obj1,obj2);
	return 0;
}
