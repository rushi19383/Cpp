#include<string>
#include<iostream>
using namespace std;

class Publication{
protected:
	string title;
	int price;
	Publication()
	{
		title ="",
		price =0.0;
	}
	void accept(){
		
		cout<<"enter the title"<<endl;
		getline (cin,title);
		cout<<"enter the price "<<endl;
		try{
			cin>> price;
			
		}
		catch(bool Logical_error){
			title="0";
			price=0.0;
		}
	}
	void display(){
		cout<<"title is :"<<title<<endl;
		cout<<"price is :"<<price<<endl;
	}
	
};


class book: public Publication{
	
};

int main(){

	return 0;

	}

