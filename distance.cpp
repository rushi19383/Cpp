#include<iostream>
using namespace std;

class Points{
    public :
    int a,b,c,d;
   void getData (void ){
       cout<<"enter the points :"<<endl;
       cin>>a>>b>>c>>d;
   }
   
   int distance(){
       int e = a-c ;
       cout<<e<<endl;
       int f =b -d ;
       cout<<f<<endl;
       int g =e*e ;
       cout<<g<<endl;
       int h =f*f ;
       cout<<h<<endl;
       int i=g+h ;
       cout<<i<<endl;
       cout<<"distance is in root "<<i<<endl;

   }
   
};

         
           


int main(){

Points a;
a.getData();
a.distance();

return 0;
}