#include<bits/stdc++.h>
using namespace std;
int pivot1(int arr[],int n){
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    while(s<=e){
        if(arr[mid]>arr[mid+1] && arr[mid]>arr[mid-1]){
            return arr[mid];
        }
        if(arr[mid]<arr[mid-1]){
            e=mid-1;

        }
        else{
            s=mid+1;
        }
        mid=s+(e-s)/2;

    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<pivot1(arr,n);


}