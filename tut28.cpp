#include<iostream>
using namespace std;
class Y;
class X {
    int data ;
    friend void add(X,Y);
    public :
        void setValue(int value){
            data = value ;
        }
        friend void add(X,Y);
};
 class Y{
     int Num;
     public :
        void setValue(int value){
        Num  = value ;
     }
     friend void add(X,Y);
 };
void add (X o1,Y o2){
    cout<<"summing dates of X and Y objectsmgives me "<< o1.data  + o2.Num;
}

int main(){
    X a1;
    a1.setValue(3);



    Y b1;
    b1.setValue(5);

    add(a1,b1);



return 0;
 }  ;