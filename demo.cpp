#include <bits/stdc++.h>
#include <iostream>
using namespace std;



int main()
{
    int n;
    cin>>n;
    int count =0;
    for (int i =0 ; i < n; i++)
    
    
    {
        
         int arr[3];
    for (int i=0; i<3; i++) {
    cin>>arr[i];
    }
   
        if( arr[0]+arr[1] == arr[2] || arr[1] + arr[2] == arr[1] || arr[1]+arr[2] == arr[0]){
            cout<<"YES";
            
        }
        
        else{
            cout<<"NO";
            
        }
        
       
    }
    
    
    }
     
        
    
    
        
    
    
     
