#include<iostream>
using namespace std;


 class Complex{
     int a,b ;

     public :
     void printNumber(void)
     {
         cout<<"enter numbers a and b "<<a<<" +"<<b<<"i" << endl;
     }


     Complex (int ,int);
 };


 Complex :: Complex(int x,int y){
     a =x;
     b =y;
 }
int main(){
    Complex a(5,4);
    a.printNumber();
    Complex b =Complex (8,9) ;
    b.printNumber();
return 0;
}