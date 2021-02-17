#include<iostream>
using namespace std;

int count =0;
class num{
    public:
    num(){
        count++;
        cout<<"This is the time when constructor is called."<<count<<endl;
    }
    ~num(){
        cout<<"destructor is called for object number"<<count<<endl;
        count--;
    }
};
int  main(){
    cout<<"in main function"<<endl;
    cout<<"1 object"<<endl;
    cout<<" ";
    
    num n1;
    {
        cout<<"Enter in this block"<<endl;
        cout<<"two  in this block"<<endl;
        num n2,n3 ;
        cout<<"exiting block"<<endl;
    }
    cout<<"back to main";

return 0;
}