#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int min=INT_MAX;
    for(int i=0;i<n;i++){
       if(arr[i]<min){
        min=arr[i];
       }
    }

    cout<<min<<endl;
    
    int secondsmallest=INT_MAX;

    for(int i=0;i<n;i++){
        if(arr[i]!=min && arr[i]<secondsmallest){
            secondsmallest=arr[i];
        }
    }
    cout<<secondsmallest<<endl;

}