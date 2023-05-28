#include<bits/stdc++.h>
using namespace std;
int pivot(int arr[],int n){
    int s=0;
    int e=n;
    int mid=s+(e-s)/2;
    while(s<e){
        if(arr[mid]>=arr[0]){
            s=mid+1;
        }
        else{
            e=mid;
        }
        mid=s+(e-s)/2;
    }
    return s;
    

}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ans=pivot(arr,n);
    cout<<"pivot is "<<ans;

}