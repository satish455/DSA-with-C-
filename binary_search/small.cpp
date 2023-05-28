#include<bits/stdc++.h>
using namespace std;
int main(){
    

    
    int n;
    cin>>n;
    int arr[n];
   int store=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];

    } 
    
    int min=INT_MAX;
    int key;
    cin>>key;
    int c=0;
    for(int i=0;i<n;i++){
        if(arr[i]<min){
         min=arr[i];
        }
    }
    store=min;
    for(int i=0;i<n;i++){
        if(arr[i]==store){
            c++;
        }
        if(c==store){
          cout<<store<<endl;
          break;
        }
       
    }
   
    
       
    
    

}