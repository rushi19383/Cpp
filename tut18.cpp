#include<iostream>
using namespace std;
int fib(int n){
	if (n<2){
		return 1;
	}
	return fib(n-2)+fib(n-1);
}
int factorial(int n){
	if (n<=1){
		return 1;
	}
	return n*factorial(n-1);

}


int main(){
	int a;
	cout<<"enter a number:";
	cin>>a;
	
	cout<<"factorial of number:"<<a<<endl<<factorial(a)<<endl;
	cout<<"term in fibonacci at position"<<a<<endl<<fib(a-1)<<endl;  
  return 0;
  //factorial of number
  	
	
}
