#include<iostream>
using namespace std;

inline  float divide(int a, int b){
	return a/b;
}

int main (){
	float a,b;
	cout<<"enter tne value of a and b:"<<endl;
	cin>>a>>b;
	cout<<"the product of a and b :"<< divide(a,b)<<endl;

}
