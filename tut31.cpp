#include<iostream>
using namespace std;
class Complex{
    int a,b;
    public:
        Complex(int x,int y){
            a = x;
            b = y;

        
        }
        Complex(int x){
            a = x;
            b = 0;
        }
        void  printNumber()
        {
            cout<<"Your number is"<< a<< " + "<<b<<"i"<<endl;
        }
};


int main(){
    Complex c1(4,5);
    
    c1.printNumber();
   
return 0;
}