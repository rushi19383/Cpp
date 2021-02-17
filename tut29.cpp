#include<iostream>
using namespace std;
 class Complex{
     int a,b ;

     public :
     void printNumber(void)
     {
         cout<<"enter numbers a and b "<<a<<b << endl;
     }


     Complex (void);
 };
 Complex :: Complex(void){
     a =10;
     b =0;
 }


int main(){
    Complex c;
    c.printNumber();

return 0;
}