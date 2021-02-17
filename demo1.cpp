#include<bits/stdc++.h>
using namespace std;

int binaryToDecimal(int n)
{
    int num = n;
    int dec_value = 0;
 
    
    int base = 1;
 
    int temp = num;
    while (temp) {
        int last_digit = temp % 10;
        temp = temp / 10;
 
        dec_value += last_digit * base;
 
        base = base * 2;
    }
 
    return dec_value;
}
int main(){
    string s="abcdefghijklmnop";
  /*  int test;
    cin>>test;
    int bits;
    cin>>bits;*/
    int n;
    cin>>n;
    int d= binaryToDecimal(n);
    cout<<s[d];
    
}