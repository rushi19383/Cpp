#include<iostream>
using namespace std;
int add(float a,int b){
	cout<<"using function with 2 argument";
	
	return a + b;
}

int add(int a,int b,int c){
		cout<<"using function with 3 argument";
	return a + b + c;
}


int volume(double r,int h){
	return(3.14*r*r*h);
}

int volume(double l,double b,double h){
	return(l*b*h);
}

int volume(int a){
	return (a * a *a );
}
int main(){
	
	cout<<"The sum of 3and 6 is:"<<add(3,6)<<endl;
	cout<<"The sum of 3and 6 and 7 is:"<<add(3,6,7)<<endl;
	cout<<"The volume of cuboid 3and 6 and 7 is:"<<volume(3,6,7)<<endl;
	cout<<"The volume of cube 3 is:"<<volume(3)<<endl;
	cout<<"The volume of cylinder 3and 6 :"<<volume(3,6)<<endl;
	
	return 0;
}
