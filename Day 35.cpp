#include<iostream>
using namespace std;
template<typename T>
void add(T a,T b)
{
    cout<<"\n Addition of two number is : "<<a+b;
}
template<typename T>
void sub(T a,T b)
{
    cout<<"\n sub of two numbers is :"<<a-b;
}
int main(){
    cout<<"\n Example of generic program";
    add<int>(10,20);
    sub<int>(50,20);
    add<float>(20.23,520.2);

    return 0;
    
}