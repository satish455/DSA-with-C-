#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main(){
   int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];

    int pivot=0;
    int i=-1;
    for(int j=0;j<n;j++ ){
        if(arr[j]<0){
            i++;
           int temp=arr[j];
           arr[j]=arr[i];
           arr[i]=temp;
        }
    }
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";


}