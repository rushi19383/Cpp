#include<iostream>
#include<string>
using namespace std;

class Shop{

    int itemId[100];
    int itemPrice[100];
    int counter;
    public:
        void initCounter(void){ counter = 0 ;}
        void getPrice(void);
        void setPrice(void);
        void displayPrice(void);

};


void Shop :: setPrice(void){
    cout<<"Enter the Id of your item"<<counter<<endl;
    cin>>itemId[counter];
    cout<<"enter Prive of your Item /n";
    cin>>itemPrice[counter];
    counter ++;

}

void Shop :: displayPrice(void){
    for (int i = 0; i < counter; i++)
    {
        cout<<"Price of item with Id"<<itemId[i]<<"is"<<itemPrice[i] ;
        /* code */
    }
    
}

int main(){
    Shop dukkan ;
    dukkan.initCounter();
    dukkan.setPrice();
    dukkan.setPrice();
    dukkan.setPrice();
    dukkan.displayPrice();
    cout<<"hello world";
    return 0;
}
