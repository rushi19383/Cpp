#include<iostream>
using namespace std;

class Simple{
    int data1;
    int data2;
    int data3;
    public:
        Simple(int a,int b,int c){
            data1 = a;
            data2 = b;
            data3 = c;

        }
        void printData();
};


void Simple :: printData(){
    cout<<"The value of data is:"<<data1<<"and"<<data2<<endl<<"and"<<data3<<endl;;
}
int main(){
    Simple s(1,2,3);
    s.printData();
return 0;
}