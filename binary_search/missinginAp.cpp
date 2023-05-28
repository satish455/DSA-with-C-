#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];

    }
      
     int result=0; 
    int diff=arr[1]-arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]!=arr[0]+i*diff){
            result=arr[0]+i*diff;
        }
    }
    cout<<result<<endl;

}