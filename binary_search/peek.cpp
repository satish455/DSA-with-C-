#include<bits/stdc++.h>
using namespace std;
int peek(int arr[],int n){
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    while(s<=e){
       if(mid>0 && mid<n-1){
        if(arr[mid]>arr[mid-1]&&arr[mid]>arr[mid+1]){
            return mid;
        }
        if(arr[mid]>arr[mid-1]){
            s=mid+1;
        }
        else {
            e=mid-1;
        }

       }
       if(mid==0){
        if(arr[0]>arr[1]){
            return 0;
        }
        else{
            return 1;

        }
       }
       if(mid==n-1){
        if(arr[n-1]>arr[n-2]){
            return n-1;
        }
        else{
            return n-2;
        }
       }
        mid=s+(e-s)/2;
    }
   
}

int main(){
   int t;
   cin>>t;
   while(t--){
    int n;
   cin>>n;
   int arr[n];
   for(int i=0;i<n;i++){
    cin>>arr[i];
   }
   int index=peek(arr,n);
   cout<<index<<endl;

   }
   

    return 0;
}